#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void clockUpdated(const QTime& currentTime);

private slots:
    void setManualHour(int hour);
    void setManualMinute(int minute);
    void setManualTime(int totalMinutes);
    void toggleHourHand();
    void toggleMinuteHand();
    void toggleManualTime();
    void toggleDigitalDisplay();
    void setDigitalFormat(bool is24Hour);
    void updateDigitalDisplay();
    void updateClock();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    bool is24HourFormat;
    QTime manualTime;  // Added to hold the manual time set by sliders
    bool useManualTime; // Added to determine whether to use manual or system time
};

#endif // MAINWINDOW_H
