//#include <QGuiApplication>
//#include <QQmlApplicationEngine>

#include <vector>
//#include <math.h>

#include <qguiapplication.h>        // for QGuiApplication
#include <qqmlapplicationengine.h>  // for QQmlApplicationEngine
#include <qstringliteral.h>         // for QStringLiteral
#include <qurl.h>                   // for QUrl

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
