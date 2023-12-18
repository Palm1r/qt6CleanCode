#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "osinfoadapter.h"
#include "appservice.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    OSInfoAdapter osInfoAdapter;
    AppService appService(&osInfoAdapter);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("osInfo", appService.getOSInfo());

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("qt6CleanCode", "Main");

    return app.exec();
}
