QT += widgets
requires(qtConfig(combobox))

HEADERS     = QtStarter.h QtWorkoutSelectionWindow.h
SOURCES     = QtStarter.cpp QtStarterGame.cpp QtWorkoutSelectionWindow.cpp
FORMS       = QtStarterMainWindow.ui QtWorkoutSelectionWindow.ui
RESOURCES   = QtStarterResources.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/layouts/QtStarter
INSTALLS += target
