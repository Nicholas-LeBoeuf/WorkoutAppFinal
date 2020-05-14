#include <iostream>
#include <cstdio>

#include "QtCore.h"
#include "ui_QtCore.h"
#include "QtWorkoutSelectionWindow.h"

QtCore :: QtCore(QDialog *parent):

        coreWorkoutOutput { "" }

{
    setupUi(this);

    QObject::connect(corePushButton, SIGNAL(clicked()), this, SLOT(corePushButtonClickedHandler()));

}
void QtCore::printStringRep() {
    return;
}
void QtCore::updateUI() {
    coreWorkoutOutputUI->setText(QString::fromStdString(coreWorkoutOutput));
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
