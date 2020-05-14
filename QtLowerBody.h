#ifndef WORKOUTAPPFINAL_QTLOWERBODY_H
#define WORKOUTAPPFINAL_QTLOWERBODY_H

#include "ui_QtLowerBody.h"
#include <QDialog>

class QtLowerBody : public QDialog, private Ui::QtLowerBody {
Q_OBJECT

public:
    QtLowerBody(QDialog *parent = nullptr);
    void printStringRep();
    void updateUI();

private:
    std::string lowerWorkoutOutput;

public Q_SLOTS:
    void lowerPushButtonClickedHandler();

};

#endif //WORKOUTAPPFINAL_QTLOWERBODY_H
