#include "../include/settingsdialog.h"
#include <QFileDialog>

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::on_selectButton_clicked()
{
    romDirectory = QFileDialog::getExistingDirectory(this, tr("Select ROM Directory"), "").toString();
    if (!romDirectory.isEmpty()) {
        ui->directoryLineEdit->setText(romDirectory);
    }
}

QString SettingsDialog::getRomDirectory() const
{
    return romDirectory;
}
