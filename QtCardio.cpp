#include <iostream>
#include <cstdio>

#include "QtCardio.h"
#include "ui_QtCardio.h"
#include "QtWorkoutSelectionWindow.h"

QtCardio :: QtCardio(QDialog *parent):

        cardioWorkoutOutput { "" }

{
    setupUi(this);

    QObject::connect(cardioPushButton, SIGNAL(clicked()), this, SLOT(cardioPushButtonClickedHandler()));
    QObject::connect(closePushButton, SIGNAL(clicked()), this, SLOT(close()));

}
void QtCardio::printStringRep() {
    return;
}
void QtCardio::updateUI() {
    cardioWorkoutOutputUI->setText(QString::fromStdString(cardioWorkoutOutput));
}
void QtCardio::cardioPushButtonClickedHandler() {
    printf("Inside cardioPushButtonClickedHandler()\n");

    if (cardioWorkoutOutput == "") {
        cardioWorkoutOutput = "45 seconds of High Knees";
    }
    else if (cardioWorkoutOutput == "45 seconds of High Knees") {
        cardioWorkoutOutput = "45 seconds of Jumping Jacks";
    }
    else if (cardioWorkoutOutput == "45 seconds of Jumping Jacks") {
        cardioWorkoutOutput = "45 seconds of Burpees";
    }
    else if (cardioWorkoutOutput == "45 seconds of Burpees") {
        cardioWorkoutOutput = "45 seconds of Running up Stairs";
    }
    else if (cardioWorkoutOutput == "45 seconds of Running up Stairs") {
        cardioWorkoutOutput = "Go for a run! However long you want!";
    }
    else if (cardioWorkoutOutput == "Go for a run! However long you want!") {
        cardioWorkoutOutput = "Cardio workout complete! Great job!";
    }

    updateUI();
}
