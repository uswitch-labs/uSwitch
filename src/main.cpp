#include "uswitchlabs/mainwindow.h"
#include <QApplication>
#include <GL/gl.h>
#include <GL/glu.h>
#include <vulkan/vulkan.h>
#include "./include/mainwindow.h"
#include "./include/settingsdialog.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
