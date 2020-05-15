#include <iostream>
#include <cstdio>

#include "QtLowerBody.h"
#include "ui_QtLowerBody.h"
#include "QtWorkoutSelectionWindow.h"
#include <QTimer>

QtLowerBody :: QtLowerBody(QDialog *parent):

        lowerWorkoutOutput { "" },
        timeTest { 0 }

{
    setupUi(this);

    QObject::connect(lowerPushButton, SIGNAL(clicked()), this, SLOT(lowerPushButtonClickedHandler()));
    QObject::connect(timerPushButton, SIGNAL(clicked()), this, SLOT(timerPushButtonClickedHandler()));
    QObject::connect(resetPushButton, SIGNAL(clicked()), this, SLOT(resetPushButtonClickedHandler()));
    QObject::connect(closePushButton, SIGNAL(clicked()), this, SLOT(close()));

}
void QtLowerBody::printStringRep() {
    return;
}
void QtLowerBody::updateUI() {
    lowerWorkoutOutputUI->setText(QString::fromStdString(lowerWorkoutOutput));
    timerUI->setText(QString::fromStdString(timeStr));
}
void QtLowerBody::lowerPushButtonClickedHandler() {
    printf("Inside lowerPushButtonClickedHandler()\n");

    if (lowerWorkoutOutput == "") {
        lowerWorkoutOutput = "45 seconds of regular Squats";
    }
    else if (lowerWorkoutOutput == "45 seconds of regular Squats") {
        lowerWorkoutOutput = "45 seconds of Lunges";
    }
    else if (lowerWorkoutOutput == "45 seconds of Lunges") {
        lowerWorkoutOutput = "45 seconds of Mountain Climbers";
    }
    else if (lowerWorkoutOutput == "45 seconds of Mountain Climbers") {
        lowerWorkoutOutput = "45 seconds of Calf Raises";
    }
    else if (lowerWorkoutOutput == "45 seconds of Calf Raises") {
        lowerWorkoutOutput = "45 seconds of Squat Jumps";
    }
    else if (lowerWorkoutOutput == "45 seconds of Squat Jumps") {
        lowerWorkoutOutput = "Lower body workout complete! Great job!";
    }

    updateUI();
}
void QtLowerBody::timerPushButtonClickedHandler() {
    printf("Inside timerPushButtonClickedHandler\n");
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(1000);
}
void QtLowerBody::updateTime() {
    timeTest = timeTest + 1;
    timeStr = std::to_string(timeTest);
    updateUI();
}
void QtLowerBody::resetPushButtonClickedHandler() {
    printf("Inside resetPushButtonClickedHandler\n");
    timeTest = 0;
    timeStr = std::to_string(timeTest);
    updateUI();
}
