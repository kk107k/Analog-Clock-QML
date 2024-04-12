#include "ClockFace.h"

ClockFace::ClockFace(QWidget *parent) : QWidget(parent), showDashLines(true), colorTheme(Black), currentTime(QTime::currentTime()) {}

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
    painter->setWindow(-56, -56, 112, 112); // Logical coordinate system

    // Use currentTime instead of QTime::currentTime()
    QTime time = currentTime;

    // Set color theme
    QColor borderColor = Qt::black; // Default border color
    switch (colorTheme) {
    case Black: borderColor = Qt::black; break;
    case Blue: borderColor = QColor("#1976D2"); break;
    case Orange: borderColor = QColor("#FF5722"); break;
    case Green: borderColor = QColor("#388E3C"); break;
    }

    // Draw the circle for the clock face border with a thicker pen
    QPen borderPen(borderColor, 7); // Thicker pen for the border
    painter->setPen(borderPen);
    painter->setBrush(Qt::white); // Set background color to red
    painter->drawEllipse(-50, -50, 100, 100);

    // Reset pen to the original for drawing hour and minute markers
    QPen originalPen(Qt::black, 1); // Keep the original thin pen for the dash lines
    painter->setPen(originalPen);

    // Set font for the minute markers
    QColor minuteMarkerColor = Qt::white;
    QFont minuteFont = painter->font();
    minuteFont.setPointSize(2); // Adjust the size as needed
    painter->setFont(minuteFont);
    painter->setPen(QPen(minuteMarkerColor));

    int minuteMarkerRadius = 50; // Set the radius where the minute markers will be placed

    // Draw minute markers at each 5-minute interval
    for (int j = 0; j < 60; j += 5) {

        QString minuteMarkerText = QString("%1").arg(j, 2, 10, QLatin1Char('0')); // Zero-padded numbers
        int minuteAngle = 30 * (j / 5 - 3); // Calculate the angle for each marker
        double minuteRadian = qDegreesToRadians(double(minuteAngle));

        // Calculate the position of the text for minute markers
        int minuteX = static_cast<int>((minuteMarkerRadius * qCos(minuteRadian)));
        int minuteY = static_cast<int>((minuteMarkerRadius * qSin(minuteRadian)));

        // Get the width and height of the text to center it properly
        QFontMetrics minuteMetrics(minuteFont);
        int minuteTextWidth = minuteMetrics.horizontalAdvance(minuteMarkerText);
        int minuteTextHeight = minuteMetrics.height();

        // Center the text at the calculated position
        QPointF minuteTextPos(minuteX - minuteTextWidth / 1.7, minuteY + minuteTextHeight / 3);

        // Draw the minute marker
        painter->drawText(minuteTextPos, minuteMarkerText);
    }

    painter->setPen(originalPen);

    // Draw the dash lines if enabled
    if (showDashLines) {
        for (int i = 0; i < 60; ++i) { // 60 iterations for each minute
            if (i % 5 == 0) {
                // Use the same color as the border for hour markers
                QPen hourMarkerPen(borderColor, 1);
                hourMarkerPen.setCapStyle(Qt::RoundCap);
                painter->setPen(hourMarkerPen);
                painter->drawLine(0, -44, 0, -47);
            } else {
                // Use the same color as the border for minute markers
                QPen minuteMarkerPen(borderColor, 1);
                minuteMarkerPen.setWidth(0); // Set the pen width to 1 for a skinnier line
                painter->setPen(minuteMarkerPen);
                painter->drawLine(0, -44, 0, -47);
            }
            painter->rotate(6.0); // Rotate 6 degrees for each minute
        }
    }

    // Set font for the numbers
    QFont font = painter->font();
    font.setPointSize(8);
    painter->setFont(font);

    int radius = 38; // Set the radius where the numbers will be placed
    QFontMetrics metrics(painter->font());
    for (int i = 1; i <= 12; ++i) {
        // Calculate the angle for each number
        int angle = 30 * (i-3); // Adjusting the numbers to be upright, subtract 3 * 30 degrees from the angle
        double radian = qDegreesToRadians(double(angle));

        // Calculate the position of the text
        int x = static_cast<int>((radius * qCos(radian)));
        int y = static_cast<int>((radius * qSin(radian)));

        QString numberText = QString::number(i);
        int textWidth = metrics.horizontalAdvance(numberText);
        int textHeight = metrics.height();

        // Adjust the position to center the text
        QPointF textPos(x - textWidth / 2, y + textHeight / 4);

        // Draw the number
        painter->setPen(Qt::black); // Set the pen color to black for hour numbers
        painter->drawText(textPos, numberText);
    }

    // Hour Hand
    if (showHourHand) {
        painter->save();
        QPen hourHandPen(Qt::black, 3, Qt::SolidLine, Qt::RoundCap); // Pen with rounded cap
        painter->setPen(hourHandPen);
        painter->rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
        painter->drawLine(QPointF(0, 0), QPointF(0, -20)); // Draw line instead of rectangle
        painter->restore();
    }

    // Minute Hand
    if (showMinuteHand) {
        painter->save();
        QPen minuteHandPen(borderColor, 2, Qt::SolidLine, Qt::RoundCap); // Pen with rounded cap
        painter->setPen(minuteHandPen);
        painter->rotate(6.0 * (time.minute() + time.second() / 60.0));
        painter->drawLine(QPointF(0, 0), QPointF(0, -30)); // Draw line instead of rectangle
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
