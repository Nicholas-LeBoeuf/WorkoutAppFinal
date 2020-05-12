
#ifndef WORKOUTAPPFINAL_QTCORE_H
#define WORKOUTAPPFINAL_QTCORE_H

#include "ui_QtCore.h"
#include <QDialog>

class QtCore : public QDialog, private Ui::QtCore {
Q_OBJECT

public:
    QtCore(QDialog *parent = nullptr);
    void printStringRep();
    void updateUI();

public Q_SLOTS:
    void okCancelButtonClickedHandler();
};

#endif //WORKOUTAPPFINAL_QTCORE_H
