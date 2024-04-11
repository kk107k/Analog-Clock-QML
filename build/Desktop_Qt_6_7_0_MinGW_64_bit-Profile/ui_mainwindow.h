/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <ClockFace.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *toggleDigitalButton;
    QPushButton *toggle12HourModeButton;
    ClockFace *clockFace;
    QLabel *digitalDisplayLabel;
    QPushButton *toggle24HourModeButton;
    QPushButton *toggleDashLinesButton;
    QPushButton *toggleMinuteHandButton;
    QPushButton *toggleHourHandButton;
    QSlider *hourHandSlider;
    QSlider *minuteHandSlider;
    QLabel *label;
    QLabel *label_2;
    QPushButton *toggleSecondHandButton;
    QPushButton *toggleManualTimeButton;
    QPushButton *blackModeButton;
    QPushButton *blueModeButton;
    QPushButton *orangeModeButton;
    QPushButton *greenModeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 616);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        toggleDigitalButton = new QPushButton(centralwidget);
        toggleDigitalButton->setObjectName("toggleDigitalButton");
        toggleDigitalButton->setGeometry(QRect(290, 370, 81, 31));
        toggle12HourModeButton = new QPushButton(centralwidget);
        toggle12HourModeButton->setObjectName("toggle12HourModeButton");
        toggle12HourModeButton->setGeometry(QRect(290, 410, 81, 31));
        clockFace = new ClockFace(centralwidget);
        clockFace->setObjectName("clockFace");
        clockFace->setGeometry(QRect(190, 40, 371, 321));
        digitalDisplayLabel = new QLabel(centralwidget);
        digitalDisplayLabel->setObjectName("digitalDisplayLabel");
        digitalDisplayLabel->setGeometry(QRect(320, 140, 111, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        digitalDisplayLabel->setFont(font);
        digitalDisplayLabel->setAlignment(Qt::AlignCenter);
        toggle24HourModeButton = new QPushButton(centralwidget);
        toggle24HourModeButton->setObjectName("toggle24HourModeButton");
        toggle24HourModeButton->setGeometry(QRect(200, 410, 81, 31));
        toggleDashLinesButton = new QPushButton(centralwidget);
        toggleDashLinesButton->setObjectName("toggleDashLinesButton");
        toggleDashLinesButton->setGeometry(QRect(200, 370, 81, 31));
        toggleMinuteHandButton = new QPushButton(centralwidget);
        toggleMinuteHandButton->setObjectName("toggleMinuteHandButton");
        toggleMinuteHandButton->setGeometry(QRect(380, 370, 81, 31));
        toggleHourHandButton = new QPushButton(centralwidget);
        toggleHourHandButton->setObjectName("toggleHourHandButton");
        toggleHourHandButton->setGeometry(QRect(380, 410, 81, 31));
        hourHandSlider = new QSlider(centralwidget);
        hourHandSlider->setObjectName("hourHandSlider");
        hourHandSlider->setGeometry(QRect(200, 450, 160, 16));
        hourHandSlider->setMaximum(23);
        hourHandSlider->setOrientation(Qt::Horizontal);
        minuteHandSlider = new QSlider(centralwidget);
        minuteHandSlider->setObjectName("minuteHandSlider");
        minuteHandSlider->setGeometry(QRect(200, 490, 351, 16));
        minuteHandSlider->setMaximum(1439);
        minuteHandSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 470, 101, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 510, 101, 16));
        toggleSecondHandButton = new QPushButton(centralwidget);
        toggleSecondHandButton->setObjectName("toggleSecondHandButton");
        toggleSecondHandButton->setGeometry(QRect(470, 410, 81, 31));
        toggleManualTimeButton = new QPushButton(centralwidget);
        toggleManualTimeButton->setObjectName("toggleManualTimeButton");
        toggleManualTimeButton->setGeometry(QRect(470, 370, 81, 31));
        blackModeButton = new QPushButton(centralwidget);
        blackModeButton->setObjectName("blackModeButton");
        blackModeButton->setGeometry(QRect(390, 450, 31, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 127));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        QBrush brush4(QColor(0, 0, 0, 127));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        blackModeButton->setPalette(palette);
        blueModeButton = new QPushButton(centralwidget);
        blueModeButton->setObjectName("blueModeButton");
        blueModeButton->setGeometry(QRect(430, 450, 31, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush5(QColor(25, 118, 210, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(90, 173, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(57, 145, 232, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(13, 59, 105, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(17, 79, 140, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush10(QColor(140, 186, 232, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        QBrush brush11(QColor(13, 59, 105, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush12(QColor(48, 152, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        blueModeButton->setPalette(palette1);
        orangeModeButton = new QPushButton(centralwidget);
        orangeModeButton->setObjectName("orangeModeButton");
        orangeModeButton->setGeometry(QRect(470, 450, 31, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush13(QColor(255, 87, 34, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush13);
        QBrush brush14(QColor(255, 184, 161, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush14);
        QBrush brush15(QColor(255, 135, 97, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        QBrush brush16(QColor(127, 44, 17, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush16);
        QBrush brush17(QColor(170, 58, 23, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush18(QColor(255, 171, 144, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        QBrush brush19(QColor(127, 44, 17, 127));
        brush19.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush19);
#endif
        QBrush brush20(QColor(255, 145, 110, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush20);
        orangeModeButton->setPalette(palette2);
        greenModeButton = new QPushButton(centralwidget);
        greenModeButton->setObjectName("greenModeButton");
        greenModeButton->setGeometry(QRect(510, 450, 31, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush21(QColor(56, 142, 60, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush21);
        QBrush brush22(QColor(84, 213, 90, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush22);
        QBrush brush23(QColor(70, 177, 75, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush23);
        QBrush brush24(QColor(28, 71, 30, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush24);
        QBrush brush25(QColor(37, 95, 40, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush21);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush26(QColor(155, 198, 157, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush26);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush21);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush22);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush21);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush26);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        QBrush brush27(QColor(28, 71, 30, 127));
        brush27.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        QBrush brush28(QColor(73, 185, 78, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush28);
        greenModeButton->setPalette(palette3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toggleDigitalButton->setText(QCoreApplication::translate("MainWindow", "Digital", nullptr));
        toggle12HourModeButton->setText(QCoreApplication::translate("MainWindow", "12 Hour", nullptr));
        digitalDisplayLabel->setText(QCoreApplication::translate("MainWindow", "12:44 PM", nullptr));
        toggle24HourModeButton->setText(QCoreApplication::translate("MainWindow", "24 Hour", nullptr));
        toggleDashLinesButton->setText(QCoreApplication::translate("MainWindow", "Dash Lines", nullptr));
        toggleMinuteHandButton->setText(QCoreApplication::translate("MainWindow", "Minute Hand", nullptr));
        toggleHourHandButton->setText(QCoreApplication::translate("MainWindow", "Hour Hand", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Hour hand slider", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Minute hand slider", nullptr));
        toggleSecondHandButton->setText(QCoreApplication::translate("MainWindow", "Second Hand", nullptr));
        toggleManualTimeButton->setText(QCoreApplication::translate("MainWindow", "System Time", nullptr));
        blackModeButton->setText(QString());
        blueModeButton->setText(QString());
        orangeModeButton->setText(QString());
        greenModeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
