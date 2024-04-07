#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "ClockFace.h" // Include the ClockFace header for the ColorTheme enum

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void toggleHourHand();
    void toggleMinuteHand();
    void toggleDigitalDisplay();
    void setDigitalFormat(bool is24Hour);
    void updateDigitalDisplay();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    bool is24HourFormat;
};

#endif // MAINWINDOW_H
