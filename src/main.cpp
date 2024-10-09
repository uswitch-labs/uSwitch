#include "./include/uswitchlabs/mainwindow.h"
#include <QApplication>
#include <GL/gl.h>
#include <GL/glu.h>
#include <vulkan/vulkan.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}