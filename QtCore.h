
#ifndef WORKOUTAPPFINAL_QTCORE_H
#define WORKOUTAPPFINAL_QTCORE_H

#include "ui_QtCore.h"
#include <QDialog>
#include <QTimer>

class QtCore : public QDialog, private Ui::QtCore {
Q_OBJECT

public:
    QtCore(QDialog *parent = nullptr);
    void printStringRep();
    void updateUI();

private:
    std::string coreWorkoutOutput;
    int timeTest;
    std::string timeStr;

public Q_SLOTS:
    void corePushButtonClickedHandler();
    void timerPushButtonClickedHandler();
    void resetPushButtonClickedHandler();
    void updateTime();

};

#endif //WORKOUTAPPFINAL_QTCORE_H
