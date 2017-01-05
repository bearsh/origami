TEMPLATE = app

QT += qml quick

CONFIG += c++11

SOURCES += main.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

include(kirigami/kirigami.pri)

# Default rules for deployment.
include(deployment.pri)

ios {
    QMAKE_INFO_PLIST = ios/Info.plist

    QMAKE_IOS_DEPLOYMENT_TARGET = 8.2
    QMAKE_IOS_TARGETED_DEVICE_FAMILY = 1,2
}
