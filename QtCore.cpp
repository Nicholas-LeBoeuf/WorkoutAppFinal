#include <iostream>
#include <cstdio>

#include "QtCore.h"
#include "ui_QtCore.h"
#include "QtWorkoutSelectionWindow.h"
#include <string>

QtCore :: QtCore(QDialog *parent):

    dummyVariable { true },
    timeOutput{ "" }
{
    setupUi(this);


}
void QtCore::printStringRep() {
    return;
}
void QtCore::updateUI() {
}
void QtCore::pushButtonClickedHandler() {
    printf("Inside pushButtonClickedHandler()\n");


}
