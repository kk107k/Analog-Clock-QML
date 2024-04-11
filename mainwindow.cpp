#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ClockFace.h"
#include <QTimer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    is24HourFormat(false),
    useManualTime(false)
{
    ui->setupUi(this);

    // Timer setup
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateClock);
    timer->start(1000); // Update every second

    // Initialize manualTime with current system time as a starting point
    manualTime = QTime::currentTime();

    // Slider connections
    connect(ui->hourHandSlider, &QSlider::valueChanged, this, &MainWindow::setManualHour);
    connect(ui->minuteHandSlider, &QSlider::valueChanged, this, &MainWindow::setManualMinute);

    // Connect hand visibility toggles
    connect(ui->toggleHourHandButton, &QPushButton::clicked, ui->clockFace, &ClockFace::toggleHourHand);
    connect(ui->toggleMinuteHandButton, &QPushButton::clicked, ui->clockFace, &ClockFace::toggleMinuteHand);
    connect(ui->toggleSecondHandButton, &QPushButton::clicked, ui->clockFace, &ClockFace::toggleSecondHand);

    // Connect digital display and format toggles
    connect(ui->toggleDigitalButton, &QPushButton::clicked, this, &MainWindow::toggleDigitalDisplay);
    connect(ui->toggle24HourModeButton, &QPushButton::clicked, this, [this]{ setDigitalFormat(true); });
    connect(ui->toggle12HourModeButton, &QPushButton::clicked, this, [this]{ setDigitalFormat(false); });

    // Connect dash line toggle
    connect(ui->toggleDashLinesButton, &QPushButton::clicked, ui->clockFace, &ClockFace::toggleDashLines);

    // Connect color theme radio buttons
    connect(ui->blackModeButton, &QPushButton::clicked, this, [this]{ ui->clockFace->setColorTheme(ClockFace::Black); });
    connect(ui->blueModeButton, &QPushButton::clicked, this, [this]{ ui->clockFace->setColorTheme(ClockFace::Blue); });
    connect(ui->orangeModeButton, &QPushButton::clicked, this, [this]{ ui->clockFace->setColorTheme(ClockFace::Orange); });
    connect(ui->greenModeButton, &QPushButton::clicked, this, [this]{ ui->clockFace->setColorTheme(ClockFace::Green); });

    connect(ui->toggleManualTimeButton, &QPushButton::clicked, this, &MainWindow::toggleManualTime);

    // Connect the slider signal to the slot for manual time setting
    connect(ui->minuteHandSlider, &QSlider::valueChanged, this, &MainWindow::setManualTime);

    // Connect for updateDigitalDisplay
    connect(this, &MainWindow::clockUpdated, this, &MainWindow::updateDigitalDisplay);

    // Initial display update
    updateDigitalDisplay();
    updateClock(); // Update clock initially
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::setManualHour(int hour) {
    manualTime.setHMS(hour, manualTime.minute(), manualTime.second());
    useManualTime = true; // Enable manual time setting
    updateDigitalDisplay();
    updateClock();
}

void MainWindow::setManualMinute(int minute) {
    manualTime.setHMS(manualTime.hour(), minute, manualTime.second());
    useManualTime = true; // Enable manual time setting
    updateDigitalDisplay();
    updateClock();
}

void MainWindow::setManualTime(int totalMinutes) {
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    manualTime.setHMS(hours, minutes, 0);  // Assuming we're setting seconds to 0
    useManualTime = true; // Enable manual time setting
    updateDigitalDisplay();
    updateClock();
}


void MainWindow::toggleHourHand() {
    ui->clockFace->toggleHourHand();
}

void MainWindow::toggleMinuteHand() {
    ui->clockFace->toggleMinuteHand();
}

void MainWindow::toggleDigitalDisplay() {
    ui->digitalDisplayLabel->setVisible(!ui->digitalDisplayLabel->isVisible());
}

void MainWindow::setDigitalFormat(bool is24Hour) {
    is24HourFormat = is24Hour;
    updateDigitalDisplay();
}

void MainWindow::toggleManualTime() {
    useManualTime = !useManualTime;

    if (!useManualTime) {
        // Sync with system time when switching back to automatic mode
        manualTime = QTime::currentTime();
    }
}

void MainWindow::updateDigitalDisplay() {
    QTime timeToUse = useManualTime ? manualTime : QTime::currentTime();
    QString format = is24HourFormat ? "HH:mm" : "hh:mm AP";
    ui->digitalDisplayLabel->setText(timeToUse.toString(format));
}

void MainWindow::updateClock() {
    if (useManualTime) {
        // Increment the manual time by one second
        manualTime = manualTime.addSecs(1);
        ui->clockFace->setCurrentTime(manualTime);
        updateDigitalDisplay();
        emit clockUpdated(manualTime); // Emit signal with updated time
    } else {
        // If not using manual time, use the system time
        QTime currentTime = QTime::currentTime();
        ui->clockFace->setCurrentTime(currentTime);
        updateDigitalDisplay();
        emit clockUpdated(currentTime); // Emit signal with updated time
    }
}
