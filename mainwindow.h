#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void clockUpdated(const QTime& currentTime);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void toggleHourHand();
    void toggleMinuteHand();
    void toggleDigitalDisplay();
    void setDigitalFormat(bool is24Hour);
    void updateDigitalDisplay();
    void updateClock();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    bool is24HourFormat;
};

#endif // MAINWINDOW_H
