#include <iostream>
#include <cstdio>

#include "QtCore.h"
#include "ui_QtCore.h"
#include "QtWorkoutSelectionWindow.h"
#include <QTimer>

QtCore :: QtCore(QDialog *parent):

        coreWorkoutOutput { "" },
        timeTest { 0 }

{
    setupUi(this);

    QObject::connect(corePushButton, SIGNAL(clicked()), this, SLOT(corePushButtonClickedHandler()));
    QObject::connect(timerPushButton, SIGNAL(clicked()), this, SLOT(timerPushButtonClickedHandler()));
    QObject::connect(resetPushButton, SIGNAL(clicked()), this, SLOT(resetPushButtonClickedHandler()));
    QObject::connect(closePushButton, SIGNAL(clicked()), this, SLOT(close()));

}
void QtCore::printStringRep() {
    return;
}
void QtCore::updateUI() {
    coreWorkoutOutputUI->setText(QString::fromStdString(coreWorkoutOutput));
    timerUI->setText(QString::fromStdString(timeStr));
}
void QtCore::corePushButtonClickedHandler() {
    printf("Inside corePushButtonClickedHandler()\n");

    if (coreWorkoutOutput == "") {
        coreWorkoutOutput = "45 second Plank (either high or low)";
    }
    else if (coreWorkoutOutput == "45 second Plank (either high or low)") {
        coreWorkoutOutput = "45 seconds of Sit Ups";
    }
    else if (coreWorkoutOutput == "45 seconds of Sit Ups") {
        coreWorkoutOutput = "45 seconds of Crunches";
    }
    else if (coreWorkoutOutput == "45 seconds of Crunches") {
        coreWorkoutOutput = "45 seconds of Russian Twists";
    }
    else if (coreWorkoutOutput == "45 seconds of Russian Twists") {
        coreWorkoutOutput = "45 seconds of Bicycle Crunches";
    }
    else if (coreWorkoutOutput == "45 seconds of Bicycle Crunches") {
        coreWorkoutOutput = "Core workout complete! Great job!";
    }

    updateUI();
}
void QtCore::timerPushButtonClickedHandler() {
    printf("Inside timerPushButtonClickedHandler\n");
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(1000);
}
void QtCore::updateTime() {
    timeTest = timeTest + 1;
    timeStr = std::to_string(timeTest);
    updateUI();
}
void QtCore::resetPushButtonClickedHandler() {
    printf("Inside resetPushButtonClickedHandler\n");
    timeTest = 0;
    timeStr = std::to_string(timeTest);
    updateUI();
}
