#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();

private slots:
    void on_zipGetFolderButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::Settings *ui;
    QSettings qSett;
};

#endif // SETTINGS_H
