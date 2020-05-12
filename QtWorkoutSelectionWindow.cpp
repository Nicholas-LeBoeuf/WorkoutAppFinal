#include <iostream>
#include <cstdio>

#include "QtWorkoutSelectionWindow.h"
#include "ui_QtWorkoutSelectionWindow.h"
#include "QtStarter.h"
#include "QtUpperBody.h"
#include "QtLowerBody.h"

QtWorkoutSelectionWindow :: QtWorkoutSelectionWindow(QDialog *parent) {
    setupUi(this);

    QObject::connect(okCancelButton, SIGNAL(accepted()), this, SLOT(okCancelButtonClickedHandler()));
    QObject::connect(upperBodyPushButton, SIGNAL(clicked()), this, SLOT(upperBodyPushButtonClickedHandler()));
    QObject::connect(lowerBodyPushButton, SIGNAL(clicked()), this, SLOT(lowerBodyPushButtonClickedHandler()));
}
void QtWorkoutSelectionWindow::printStringRep() {
    return;
}
void QtWorkoutSelectionWindow::updateUI() {

}
void QtWorkoutSelectionWindow::okCancelButtonClickedHandler() {
    printf("Inside okCancelButtonClickedHandler()\n");
}
void QtWorkoutSelectionWindow::upperBodyPushButtonClickedHandler() {
    printf("Inside upperBodyPushButtonClickedHandler()\n");
    QtUpperBody QtUpperBody;
    QtUpperBody.exec();
    updateUI();
}
void QtWorkoutSelectionWindow::lowerBodyPushButtonClickedHandler() {
    printf("Inside lowerBodyPushButtonClickedHandler()\n");
    QtLowerBody QtLowerBody;
    QtLowerBody.exec();
    updateUI();
}