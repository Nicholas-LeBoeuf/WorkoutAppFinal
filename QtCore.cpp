#include "QtCore.h"
#include <iostream>
#include <cstdio>

#include "ui_QtCore.h"
#include "QtWorkoutSelectionWindow.h"

QtCore :: QtCore(QDialog *parent) {
    setupUi(this);

    /*QObject::connect(okCancelButton, SIGNAL(accepted()), this, SLOT(okCancelButtonClickedHandler()));*/
}
void QtCore::printStringRep() {
    return;
}
void QtCore::updateUI() {

}
void QtCore::okCancelButtonClickedHandler() {
    printf("Inside okCancelButtonClickedHandler()\n");
}