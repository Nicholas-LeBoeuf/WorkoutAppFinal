#ifndef WORKOUTAPPFINAL_QTSTARTER_H
#define WORKOUTAPPFINAL_QTSTARTER_H

#include "ui_QtStarterMainWindow.h"
#include <QMainWindow>

class QtStarterMainWindow : public QMainWindow, private Ui::QtStarterMainWindow {
Q_OBJECT

public:
    QtStarterMainWindow(QMainWindow *parent = nullptr);
    void printStringRep();
    void updateUI();

public Q_SLOTS:
    void pushButtonClickedHandler();

};

#endif //WORKOUTAPPFINAL_QTSTARTER_H
