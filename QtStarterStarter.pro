QT += widgets
requires(qtConfig(combobox))

HEADERS     = QtStarter.h QtWorkoutSelectionWindow.h QtUpperBody.h QtCore.h QtCardio.h
SOURCES     = QtStarter.cpp QtStarterGame.cpp QtWorkoutSelectionWindow.cpp QtUpperBody.cpp QtCore.cpp QtCardio.cpp
FORMS       = QtStarterMainWindow.ui QtWorkoutSelectionWindow.ui QtUpperBody.ui QtCore.ui QtCardio.ui
RESOURCES   = QtStarterResources.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/layouts/QtStarter
INSTALLS += target
