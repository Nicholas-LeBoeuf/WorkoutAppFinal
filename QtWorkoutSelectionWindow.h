#ifndef WORKOUTAPPFINAL_QTWORKOUTSELECTIONWINDOW_H
#define WORKOUTAPPFINAL_QTWORKOUTSELECTIONWINDOW_H

#include "ui_QtWorkoutSelectionWindow.h"
#include <QDialog>

class QtWorkoutSelectionWindow : public QDialog, private Ui::QtWorkoutSelectionWindow {
    Q_OBJECT

public:
    QtWorkoutSelectionWindow(QDialog *parent = nullptr);
    void printStringRep();
    void updateUI();

public Q_SLOTS:
    void okCancelButtonClickedHandler();
    void corePushButtonClickedHandler();
    void cardioPushButtonClickedHandler();
    void upperBodyPushButtonClickedHandler();
    void lowerBodyPushButtonClickedHandler();
};

#endif //WORKOUTAPPFINAL_QTWORKOUTSELECTIONWINDOW_H
