QT += widgets
requires(qtConfig(combobox))

HEADERS     = QtStarter.h QtWorkoutSelectionWindow.h QtUpperBody.h
SOURCES     = QtStarter.cpp QtStarterGame.cpp QtWorkoutSelectionWindow.cpp QtUpperBody.cpp
FORMS       = QtStarterMainWindow.ui QtWorkoutSelectionWindow.ui QtUpperBody.ui
RESOURCES   = QtStarterResources.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/layouts/QtStarter
INSTALLS += target
