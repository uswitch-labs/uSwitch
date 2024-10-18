#include "./include/uswitchlabs/mainwindow.h"
#include "./include/mainwindow.h"
#include "./include/settingsdialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::setRomDirectory() {
    SettingsDialog settingsDialog(this);
    settingsDialog.exec();
    romDirectory = settingsDialog.getRomDirectory();
    if (!romDirectory.isEmpty()) {
        ui->statusbar->showMessage("ROM directory set to: " + romDirectory);
        saveRomDirectory();
        listRomFiles();
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}
