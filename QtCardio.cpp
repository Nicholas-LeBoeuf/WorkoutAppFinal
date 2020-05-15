#include <iostream>
#include <cstdio>

#include "QtCardio.h"
#include "ui_QtCardio.h"
#include "QtWorkoutSelectionWindow.h"
#include <QTimer>

QtCardio :: QtCardio(QDialog *parent):

        cardioWorkoutOutput { "" },
        timeTest { 0 }

{
    setupUi(this);
    QObject::connect(cardioPushButton, SIGNAL(clicked()), this, SLOT(cardioPushButtonClickedHandler()));
    QObject::connect(timerPushButton, SIGNAL(clicked()), this, SLOT(timerPushButtonClickedHandler()));
    QObject::connect(resetPushButton, SIGNAL(clicked()), this, SLOT(resetPushButtonClickedHandler()));
    QObject::connect(closePushButton, SIGNAL(clicked()), this, SLOT(close()));

}
void QtCardio::printStringRep() {
    return;
}
void QtCardio::updateUI() {
    cardioWorkoutOutputUI->setText(QString::fromStdString(cardioWorkoutOutput));
    timerUI->setText(QString::fromStdString(timeStr));
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
void QtCardio::timerPushButtonClickedHandler() {
    printf("Inside timerPushButtonClickedHandler\n");
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateCaption()));
    timer->start(1000);
}
void QtCardio::updateCaption() {
    timeTest = timeTest + 1;
    timeStr = std::to_string(timeTest);
    updateUI();
}
void QtCardio::resetPushButtonClickedHandler() {
    printf("Inside resetPushButtonClickedHandler\n");
    timeTest = 0;
    timeStr = std::to_string(timeTest);
    updateUI();
}
