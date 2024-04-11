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
#include <QtWidgets/QRadioButton>
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
    QRadioButton *darkModeRadioButton;
    ClockFace *clockFace;
    QRadioButton *lightModeRadioButton;
    QLabel *digitalDisplayLabel;
    QPushButton *toggle24HourModeButton;
    QPushButton *toggleDashLinesButton;
    QPushButton *toggleMinuteHandButton;
    QPushButton *toggleHourHandButton;
    QSlider *HourHandSlider;
    QSlider *minuteHandSlider;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *blueModeRadioButton;
    QRadioButton *redModeRadioButton;
    QPushButton *toggleSecondHandButton;
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
        toggleDigitalButton->setGeometry(QRect(290, 410, 81, 31));
        toggle12HourModeButton = new QPushButton(centralwidget);
        toggle12HourModeButton->setObjectName("toggle12HourModeButton");
        toggle12HourModeButton->setGeometry(QRect(290, 450, 81, 31));
        darkModeRadioButton = new QRadioButton(centralwidget);
        darkModeRadioButton->setObjectName("darkModeRadioButton");
        darkModeRadioButton->setGeometry(QRect(470, 490, 81, 16));
        clockFace = new ClockFace(centralwidget);
        clockFace->setObjectName("clockFace");
        clockFace->setGeometry(QRect(190, 40, 371, 321));
        lightModeRadioButton = new QRadioButton(centralwidget);
        lightModeRadioButton->setObjectName("lightModeRadioButton");
        lightModeRadioButton->setGeometry(QRect(470, 510, 91, 21));
        digitalDisplayLabel = new QLabel(centralwidget);
        digitalDisplayLabel->setObjectName("digitalDisplayLabel");
        digitalDisplayLabel->setGeometry(QRect(290, 370, 171, 31));
        QFont font;
        font.setPointSize(31);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        digitalDisplayLabel->setFont(font);
        toggle24HourModeButton = new QPushButton(centralwidget);
        toggle24HourModeButton->setObjectName("toggle24HourModeButton");
        toggle24HourModeButton->setGeometry(QRect(200, 450, 81, 31));
        toggleDashLinesButton = new QPushButton(centralwidget);
        toggleDashLinesButton->setObjectName("toggleDashLinesButton");
        toggleDashLinesButton->setGeometry(QRect(200, 410, 81, 31));
        toggleMinuteHandButton = new QPushButton(centralwidget);
        toggleMinuteHandButton->setObjectName("toggleMinuteHandButton");
        toggleMinuteHandButton->setGeometry(QRect(380, 410, 81, 31));
        toggleHourHandButton = new QPushButton(centralwidget);
        toggleHourHandButton->setObjectName("toggleHourHandButton");
        toggleHourHandButton->setGeometry(QRect(380, 450, 81, 31));
        HourHandSlider = new QSlider(centralwidget);
        HourHandSlider->setObjectName("HourHandSlider");
        HourHandSlider->setGeometry(QRect(200, 490, 160, 16));
        HourHandSlider->setMaximum(23);
        HourHandSlider->setOrientation(Qt::Horizontal);
        minuteHandSlider = new QSlider(centralwidget);
        minuteHandSlider->setObjectName("minuteHandSlider");
        minuteHandSlider->setGeometry(QRect(200, 530, 160, 16));
        minuteHandSlider->setMaximum(59);
        minuteHandSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 510, 101, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 550, 101, 16));
        blueModeRadioButton = new QRadioButton(centralwidget);
        blueModeRadioButton->setObjectName("blueModeRadioButton");
        blueModeRadioButton->setGeometry(QRect(380, 510, 91, 21));
        redModeRadioButton = new QRadioButton(centralwidget);
        redModeRadioButton->setObjectName("redModeRadioButton");
        redModeRadioButton->setGeometry(QRect(380, 490, 81, 16));
        toggleSecondHandButton = new QPushButton(centralwidget);
        toggleSecondHandButton->setObjectName("toggleSecondHandButton");
        toggleSecondHandButton->setGeometry(QRect(470, 450, 81, 31));
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
        darkModeRadioButton->setText(QCoreApplication::translate("MainWindow", "Dark Mode", nullptr));
        lightModeRadioButton->setText(QCoreApplication::translate("MainWindow", "Light Mode", nullptr));
        digitalDisplayLabel->setText(QCoreApplication::translate("MainWindow", "12:44 PM", nullptr));
        toggle24HourModeButton->setText(QCoreApplication::translate("MainWindow", "24 Hour", nullptr));
        toggleDashLinesButton->setText(QCoreApplication::translate("MainWindow", "Dash Lines", nullptr));
        toggleMinuteHandButton->setText(QCoreApplication::translate("MainWindow", "Minute Hand", nullptr));
        toggleHourHandButton->setText(QCoreApplication::translate("MainWindow", "Hour Hand", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Hour hand slider", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Minute hand slider", nullptr));
        blueModeRadioButton->setText(QCoreApplication::translate("MainWindow", "Blue Mode", nullptr));
        redModeRadioButton->setText(QCoreApplication::translate("MainWindow", "Red Mode", nullptr));
        toggleSecondHandButton->setText(QCoreApplication::translate("MainWindow", "Second Hand", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
