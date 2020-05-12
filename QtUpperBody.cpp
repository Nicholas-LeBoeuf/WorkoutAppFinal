#include "QtUpperBody.h"
#include <iostream>
#include <cstdio>

#include "QtUpperBody.h"
#include "ui_QtUpperBody.h"
#include "QtWorkoutSelectionWindow.h"

QtUpperBody :: QtUpperBody(QDialog *parent) {
    setupUi(this);

    /*QObject::connect(okCancelButton, SIGNAL(accepted()), this, SLOT(okCancelButtonClickedHandler()));*/
}
void QtUpperBody::printStringRep() {
    return;
}
void QtUpperBody::updateUI() {

}
void QtUpperBody::okCancelButtonClickedHandler() {
    printf("Inside okCancelButtonClickedHandler()\n");
}