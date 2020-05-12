QT += widgets
requires(qtConfig(combobox))


HEADERS     = QtStarter.h QtWorkoutSelectionWindow.h QtUpperBody.h QtLowerBody.h QtCore.h QtCardio.h
SOURCES     = QtStarter.cpp QtStarterGame.cpp QtWorkoutSelectionWindow.cpp QtUpperBody.cpp QtLowerBody.cpp QtCore.cpp QtCardio.cpp
FORMS       = QtStarterMainWindow.ui QtWorkoutSelectionWindow.ui QtUpperBody.ui QtLowerBody.ui QtCore.ui QtCardio.ui
RESOURCES   = QtStarterResources.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/layouts/QtStarter
INSTALLS += target
