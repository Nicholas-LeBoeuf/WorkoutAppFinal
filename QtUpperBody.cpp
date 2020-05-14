#include <iostream>
#include <cstdio>

#include "QtUpperBody.h"
#include "ui_QtUpperBody.h"
#include "QtWorkoutSelectionWindow.h"

QtUpperBody :: QtUpperBody(QDialog *parent):

    upperWorkoutOutput { "" }

{
    setupUi(this);

    QObject::connect(upperPushButton, SIGNAL(clicked()), this, SLOT(upperPushButtonClickedHandler()));

}
void QtUpperBody::printStringRep() {
    return;
}
void QtUpperBody::updateUI() {
    upperWorkoutOutputUI->setText(QString::fromStdString(upperWorkoutOutput));
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