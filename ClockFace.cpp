#include "ClockFace.h"

ClockFace::ClockFace(QWidget *parent) : QWidget(parent), showDashLines(true), colorTheme(Light), currentTime(QTime::currentTime()) {}

void ClockFace::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    drawClockFace(&painter);
}

void ClockFace::toggleHourHand() {
    showHourHand = !showHourHand;
    update(); // Force a repaint to reflect the change
}

void ClockFace::toggleMinuteHand() {
    showMinuteHand = !showMinuteHand;
    update(); // Force a repaint to reflect the change
}

void ClockFace::toggleSecondHand() {
    showSecondHand = !showSecondHand;
    update(); // Force a repaint to reflect the change
}


void ClockFace::toggleDashLines() {
    showDashLines = !showDashLines;
    update(); // Force a repaint to reflect the change
}

void ClockFace::setColorTheme(ColorTheme theme) {
    colorTheme = theme;
    update(); // Force a repaint to reflect the change
}

void ClockFace::setCurrentTime(const QTime &time) {
    currentTime = time;
    update(); // Force a repaint to reflect the change
}

void ClockFace::drawClockFace(QPainter *painter) {
    int side = qMin(width(), height());

    painter->setViewport((width() - side) / 2, (height() - side) / 2, side, side);
    painter->setWindow(-50, -50, 100, 100); // Logical coordinate system

    // Use currentTime instead of QTime::currentTime()
    QTime time = currentTime;

    // Draw the circle for the clock face
    painter->setBrush(Qt::white);
    painter->drawEllipse(-50, -50, 100, 100);

    // Set color theme
    QColor faceColor = Qt::white;
    switch (colorTheme) {
    case Light: faceColor = Qt::white; break;
    case Dark: faceColor = Qt::gray; break;
    case Blue: faceColor = Qt::blue; break;
    case Red: faceColor = Qt::red; break;
    }
    painter->setBrush(faceColor);
    painter->setPen(Qt::black);
    painter->drawEllipse(-50, -50, 100, 100);

    // Draw the dash lines if enabled
    if (showDashLines) {
        for (int i = 0; i < 12; ++i) {
            painter->drawLine(0, -47, 0, -50);
            painter->rotate(30.0);
        }
    }

    // Draw the hour and minute hands if enabled
    painter->setPen(Qt::NoPen);
    painter->setBrush(Qt::black);

    // Hour Hand
    if (showHourHand) {
        painter->save();
        painter->setPen(QPen(Qt::black, 3));
        painter->rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
        painter->drawRect(0, 0, 0, -20);
        painter->restore();
    }

    // Minute Hand
    if (showMinuteHand) {
        painter->save();
        painter->setPen(QPen(Qt::black, 2));
        painter->rotate(6.0 * (time.minute() + time.second() / 60.0));
        painter->drawRect(0, 0, 0, -30);
        painter->restore();
    }

    if (showSecondHand) {
        painter->save();
        painter->setPen(QPen(Qt::red, 1));
        painter->rotate(6.0 * currentTime.second());
        painter->drawLine(0, 0, 0, -40);
        painter->restore();
    }
}
