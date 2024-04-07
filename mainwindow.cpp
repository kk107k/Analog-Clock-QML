#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ClockFace.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), is24HourFormat(false) {
    ui->setupUi(this);

    // Timer setup
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateDigitalDisplay);
    timer->start(1000); // Update every second

    // Connect hand visibility toggles
    connect(ui->toggleHourHandButton, &QPushButton::clicked, ui->clockFace, &ClockFace::toggleHourHand);
    connect(ui->toggleMinuteHandButton, &QPushButton::clicked, ui->clockFace, &ClockFace::toggleMinuteHand);

    // Connect digital display and format toggles
    connect(ui->toggleDigitalButton, &QPushButton::clicked, this, &MainWindow::toggleDigitalDisplay);
    connect(ui->toggle24HourModeButton, &QPushButton::clicked, this, [this]{ setDigitalFormat(true); });
    connect(ui->toggle12HourModeButton, &QPushButton::clicked, this, [this]{ setDigitalFormat(false); });

    // Connect dash line toggle
    connect(ui->toggleDashLinesButton, &QPushButton::clicked, ui->clockFace, &ClockFace::toggleDashLines);

    // Connect color theme radio buttons
    connect(ui->lightModeRadioButton, &QRadioButton::clicked, this, [this]{ ui->clockFace->setColorTheme(ClockFace::Light); });
    connect(ui->darkModeRadioButton, &QRadioButton::clicked, this, [this]{ ui->clockFace->setColorTheme(ClockFace::Dark); });
    connect(ui->blueModeRadioButton, &QRadioButton::clicked, this, [this]{ ui->clockFace->setColorTheme(ClockFace::Blue); });
    connect(ui->redModeRadioButton, &QRadioButton::clicked, this, [this]{ ui->clockFace->setColorTheme(ClockFace::Red); });

    // Connect the sliders to the ClockFace
    connect(ui->HourHandSlider, &QSlider::valueChanged, ui->clockFace, &ClockFace::setHour);
    connect(ui->minuteHandSlider, &QSlider::valueChanged, ui->clockFace, &ClockFace::setMinute);

    // Set the range for the sliders
    ui->HourHandSlider->setRange(0, 23);
    ui->minuteHandSlider->setRange(0, 59);

    // Initial display update
    updateDigitalDisplay();
}

MainWindow::~MainWindow() {
    delete ui;
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

void MainWindow::updateDigitalDisplay() {
    QTime time = QTime::currentTime();
    QString format = is24HourFormat ? "HH:mm" : "hh:mm AP";
    ui->digitalDisplayLabel->setText(time.toString(format));
}
