#include <iostream>
#include <cstdio>

#include "QtUpperBody.h"
#include "ui_QtUpperBody.h"
#include "QtWorkoutSelectionWindow.h"
#include <QTimer>

QtUpperBody :: QtUpperBody(QDialog *parent):

    upperWorkoutOutput { "" },
    timeTest { 0 }

{
    setupUi(this);

    QObject::connect(upperPushButton, SIGNAL(clicked()), this, SLOT(upperPushButtonClickedHandler()));
    QObject::connect(timerPushButton, SIGNAL(clicked()), this, SLOT(timerPushButtonClickedHandler()));
    QObject::connect(resetPushButton, SIGNAL(clicked()), this, SLOT(resetPushButtonClickedHandler()));
    QObject::connect(closePushButton, SIGNAL(clicked()), this, SLOT(close()));

}
void QtUpperBody::printStringRep() {
    return;
}
void QtUpperBody::updateUI() {
    upperWorkoutOutputUI->setText(QString::fromStdString(upperWorkoutOutput));
    timerUI->setText(QString::fromStdString(timeStr));
}
void QtUpperBody::upperPushButtonClickedHandler() {
    printf("Inside upperPushButtonClickedHandler()\n");

    if (upperWorkoutOutput == "") {
        upperWorkoutOutput = "45 seconds of Push Ups";
    }
    else if (upperWorkoutOutput == "45 seconds of Push Ups") {
        upperWorkoutOutput = "45 seconds of Triceps Dips";
    }
    else if (upperWorkoutOutput == "45 seconds of Triceps Dips") {
        upperWorkoutOutput = "45 seconds of Plank Shoulder Taps";
    }
    else if (upperWorkoutOutput == "45 seconds of Plank Shoulder Taps") {
        upperWorkoutOutput = "45 seconds of Diamond Push Ups (use a wall)";
    }
    else if (upperWorkoutOutput == "45 seconds of Diamond Push Ups (use a wall)") {
        upperWorkoutOutput = "45 seconds of High Plank to Low Plank";
    }
    else if (upperWorkoutOutput == "45 seconds of High Plank to Low Plank") {
        upperWorkoutOutput = "Upper body workout complete! Great job!";
    }

    updateUI();
}
void QtUpperBody::timerPushButtonClickedHandler() {
    printf("Inside timerPushButtonClickedHandler\n");
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(1000);
}
void QtUpperBody::updateTime() {
    timeTest = timeTest + 1;
    timeStr = std::to_string(timeTest);
    updateUI();
}
void QtUpperBody::resetPushButtonClickedHandler() {
    printf("Inside resetPushButtonClickedHandler\n");
    timeTest = 0;
    timeStr = std::to_string(timeTest);
    updateUI();
}
