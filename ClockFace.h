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
    enum ColorTheme { Black, Blue, Green, Orange };

public slots:
    void toggleHourHand();
    void toggleMinuteHand();
    void toggleSecondHand();
    void toggleDashLines();
    void setColorTheme(ColorTheme theme);
    void setCurrentTime(const QTime &time);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    void drawClockFace(QPainter *painter);
    bool showHourHand = true;
    bool showMinuteHand = true;
    bool showSecondHand = true;
    bool showDashLines = true;
    ColorTheme colorTheme = Black;
    QTime currentTime;
};

#endif // CLOCKFACE_H
