#include <iostream>
#include <cstdio>

#include "QtWorkoutSelectionWindow.h"
#include "ui_QtWorkoutSelectionWindow.h"
#include "QtStarter.h"
#include "QtUpperBody.h"
#include "QtCore.h"

QtWorkoutSelectionWindow :: QtWorkoutSelectionWindow(QDialog *parent) {
    setupUi(this);

    QObject::connect(okCancelButton, SIGNAL(accepted()), this, SLOT(okCancelButtonClickedHandler()));
    QObject::connect(dialogPushButton, SIGNAL(clicked()), this, SLOT(dialogPushButtonClickedHandler()));
    QObject::connect(corePushButton, SIGNAL(clicked()), this, SLOT(corePushButtonClickedHandler()));
}
void QtWorkoutSelectionWindow::printStringRep() {
    return;
}
void QtWorkoutSelectionWindow::updateUI() {

}
void QtWorkoutSelectionWindow::okCancelButtonClickedHandler() {
    printf("Inside okCancelButtonClickedHandler()\n");
}
void QtWorkoutSelectionWindow::dialogPushButtonClickedHandler() {
    printf("Inside dialogPushButtonClickedHandler()\n");
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