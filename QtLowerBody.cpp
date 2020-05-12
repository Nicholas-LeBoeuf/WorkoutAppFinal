#include "QtLowerBody.h"
#include <iostream>
#include <cstdio>

#include "ui_QtLowerBody.h"
#include "QtWorkoutSelectionWindow.h"

QtLowerBody :: QtLowerBody(QDialog *parent) {
    setupUi(this);

    /*QObject::connect(okCancelButton, SIGNAL(accepted()), this, SLOT(okCancelButtonClickedHandler()));*/
}
void QtLowerBody::printStringRep() {
    return;
}
void QtLowerBody::updateUI() {

}
void QtLowerBody::okCancelButtonClickedHandler() {
    printf("Inside okCancelButtonClickedHandler()\n");
}