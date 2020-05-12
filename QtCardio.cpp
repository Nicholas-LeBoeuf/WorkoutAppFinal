#include <iostream>
#include <cstdio>

#include "QtCardio.h"
#include "ui_QtCardio.h"
#include "QtWorkoutSelectionWindow.h"

QtCardio :: QtCardio(QDialog *parent) {
    setupUi(this);

    /*QObject::connect(okCancelButton, SIGNAL(accepted()), this, SLOT(okCancelButtonClickedHandler()));*/
}
void QtCardio::printStringRep() {
    return;
}
void QtCardio::updateUI() {

}
void QtCardio::okCancelButtonClickedHandler() {
    printf("Inside cardioPushButtonClickedHandler()\n");
}
