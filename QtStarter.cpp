#include <iostream>
#include <cstdio>

#include "QtStarter.h"
#include "ui_QtStarterMainWindow.h"
#include "QtWorkoutSelectionWindow.h"

void displayResults(float currentBank, float currentBet);

QtStarterMainWindow :: QtStarterMainWindow(QMainWindow *parent) {
    setupUi(this);

    QObject::connect(pushButton, SIGNAL(clicked()), this, SLOT(pushButtonClickedHandler()));
}

void QtStarterMainWindow::printStringRep() {
    return;
}

void QtStarterMainWindow::updateUI() {

}

void QtStarterMainWindow::pushButtonClickedHandler() {
    printf("Inside pushButtonClickedHandler()\n");
    QtWorkoutSelectionWindow QtWorkoutSelectionWindow;
    QtWorkoutSelectionWindow.exec();
    updateUI();
}
