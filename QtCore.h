
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
    bool dummyVariable;
    std::string timeOutput;

public Q_SLOTS:
    void pushButtonClickedHandler();
};

#endif //WORKOUTAPPFINAL_QTCORE_H
