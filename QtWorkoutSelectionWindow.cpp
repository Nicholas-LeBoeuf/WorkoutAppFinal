#include <iostream>
#include <cstdio>

#include "QtWorkoutSelectionWindow.h"
#include "ui_QtWorkoutSelectionWindow.h"
#include "QtStarter.h"
#include "QtUpperBody.h"
#include "QtCore.h"
#include "QtCardio.h"
#include "QtLowerBody.h"

QtWorkoutSelectionWindow :: QtWorkoutSelectionWindow(QDialog *parent) {
    setupUi(this);

    QObject::connect(okCancelButton, SIGNAL(accepted()), this, SLOT(okCancelButtonClickedHandler()));
    QObject::connect(corePushButton, SIGNAL(clicked()), this, SLOT(corePushButtonClickedHandler()));
    QObject::connect(cardioPushButton, SIGNAL(clicked()), this, SLOT(cardioPushButtonClickedHandler()));
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
void QtWorkoutSelectionWindow::corePushButtonClickedHandler() {
    printf("Inside corePushButtonClickedHandler()\n");
    QtCore QtCore;
    QtCore.exec();
    updateUI();
}
void QtWorkoutSelectionWindow::cardioPushButtonClickedHandler() {
    printf("Inside cardioPushButtonClickedHandler()\n");
    QtCardio QtCardio;
    QtCardio.exec();
    updateUI();
}    
void QtWorkoutSelectionWindow::lowerBodyPushButtonClickedHandler() {
    printf("Inside lowerBodyPushButtonClickedHandler()\n");
    QtLowerBody QtLowerBody;
    QtLowerBody.exec();
    updateUI();
}