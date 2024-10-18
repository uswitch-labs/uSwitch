#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>

namespace include {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = nullptr);
    ~SettingsDialog();

    QString getRomDirectory() const;

private slots:
    void on_selectButton_clicked();

private:
    Ui::SettingsDialog *ui;
    QString romDirectory;
};

#endif // SETTINGSDIALOG_H
