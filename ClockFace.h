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

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    void drawClockFace(QPainter *painter);
    bool showHourHand = true;
    bool showMinuteHand = true;
    bool showDashLines = true;
    ColorTheme colorTheme = Light;
};

#endif // CLOCKFACE_H
