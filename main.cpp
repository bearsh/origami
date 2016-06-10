#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "kirigamiplugin.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //engine.addImportPath("qrc:///");
    KirigamiPlugin::registerTypes();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
