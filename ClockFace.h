#ifndef CLOCKFACE_H
#define CLOCKFACE_H

#include <QWidget>
#include <QPainter>
#include <QTime>

class ClockFace : public QWidget
{
    Q_OBJECT

public:
    explicit ClockFace(QWidget *parent = nullptr);
    enum ColorTheme { Light, Dark, Blue, Red };

public slots:
    void toggleHourHand();
    void toggleMinuteHand();
    void toggleDashLines();
    void setColorTheme(ColorTheme theme);
    void setHour(int hour);
    void setMinute(int minute);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    void drawClockFace(QPainter *painter);
    bool showHourHand = true;
    bool showMinuteHand = true;
    bool showDashLines = true;
    ColorTheme colorTheme = Light;
    QTime currentTime;
};

#endif // CLOCKFACE_H
