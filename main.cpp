#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "kirigamistatic.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //engine.addImportPath("qrc:///");
    Kirigami::getInstance().registerTypes("org.kde.kirigami");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
