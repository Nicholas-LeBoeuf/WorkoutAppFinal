QT += widgets
requires(qtConfig(combobox))

HEADERS     = QtStarter.h QtWorkoutSelectionWindow.h QtUpperBody.h QtLowerBody.h
SOURCES     = QtStarter.cpp QtStarterGame.cpp QtWorkoutSelectionWindow.cpp QtUpperBody.cpp QtLowerBody.cpp
FORMS       = QtStarterMainWindow.ui QtWorkoutSelectionWindow.ui QtUpperBody.ui QtLowerBody.ui
RESOURCES   = QtStarterResources.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/layouts/QtStarter
INSTALLS += target
