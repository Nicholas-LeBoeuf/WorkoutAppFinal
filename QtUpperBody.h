#ifndef WORKOUTAPPFINAL_QTUPPERBODY_H
#define WORKOUTAPPFINAL_QTUPPERBODY_H

#include "ui_QtUpperBody.h"
#include <QDialog>

class QtUpperBody : public QDialog, private Ui::QtUpperBody {
Q_OBJECT

public:
    QtUpperBody(QDialog *parent = nullptr);
    void printStringRep();
    void updateUI();

private:
    std::string upperWorkoutOutput;
    int timeTest;
    std::string timeStr;

public Q_SLOTS:
    void upperPushButtonClickedHandler();
    void timerPushButtonClickedHandler();
    void resetPushButtonClickedHandler();
    void updateTime();

};


#endif //WORKOUTAPPFINAL_QTUPPERBODY_H
