#include "QtUpperBody.h"
#include <iostream>
#include <cstdio>

#include "QtUpperBody.h"
#include "ui_QtUpperBody.h"
#include "QtWorkoutSelectionWindow.h"

QtUpperBody :: QtUpperBody(QDialog *parent):
    workoutOutput { "" }

{
    setupUi(this);

    QObject::connect(upperPushButton, SIGNAL(clicked()), this, SLOT(upperPushButtonClickedHandler()));
}
void QtUpperBody::printStringRep() {
    return;
}
void QtUpperBody::updateUI() {
    workoutOutputUI->setText(QString::fromStdString(workoutOutput));
}
void QtUpperBody::upperPushButtonClickedHandler() {
    printf("Inside upperPushButtonClickedHandler()\n");

    if (workoutOutput == "") {
        workoutOutput = "45 seconds of Push Ups";
    }
    else if (workoutOutput == "45 seconds of Push Ups") {
        workoutOutput = "45 seconds of Triceps Dips";
    }
    else if (workoutOutput == "45 seconds of Triceps Dips") {
        workoutOutput = "45 seconds of Plank Shoulder Taps";
    }
    else if (workoutOutput == "45 seconds of Plank Shoulder Taps") {
        workoutOutput = "45 seconds of Diamond Push Ups (use a wall)";
    }
    else if (workoutOutput == "45 seconds of Diamond Push Ups (use a wall)") {
        workoutOutput = "45 seconds of High Plank to Low Plank";
    }
    else if (workoutOutput == "45 seconds of High Plank to Low Plank") {
        workoutOutput = "Upper body workout finished! Great job!";
    }

    updateUI();
}