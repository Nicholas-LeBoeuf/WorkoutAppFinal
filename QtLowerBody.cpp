#include <iostream>
#include <cstdio>

#include "QtLowerBody.h"
#include "ui_QtLowerBody.h"
#include "QtWorkoutSelectionWindow.h"

QtLowerBody :: QtLowerBody(QDialog *parent):

        lowerWorkoutOutput { "" }

{
    setupUi(this);

    QObject::connect(lowerPushButton, SIGNAL(clicked()), this, SLOT(lowerPushButtonClickedHandler()));
    QObject::connect(closePushButton, SIGNAL(clicked()), this, SLOT(close()));

}
void QtLowerBody::printStringRep() {
    return;
}
void QtLowerBody::updateUI() {
    lowerWorkoutOutputUI->setText(QString::fromStdString(lowerWorkoutOutput));
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