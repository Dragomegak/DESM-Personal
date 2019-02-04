#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QMainWindow>
#include <QMessageBox>
#include "mainscreen.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString username;
    QString password;

private slots:
    void on_signInButton_clicked();

private:
    Ui::MainWindow *ui;
    MainScreen * mainScreen;
};

#endif // LOGINSCREEN_H
