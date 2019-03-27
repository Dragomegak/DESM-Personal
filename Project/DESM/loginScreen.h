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
signals:
    void username(QString);


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void usernameTextPush(const QString& newUsername){
       emit username(newUsername);
    }

private slots:
    void usernameEmit();

private:
    Ui::MainWindow *ui;
    MainScreen * mainScreen;
};

class saveUsername {
    private:
    QString usernametext;
    public:
    saveUsername(){
        usernametext = "none specified";
    }
    saveUsername(QString inputusernametext){
      usernametext = inputusernametext;
    }
    ~saveUsername(){
        delete &usernametext;
    }
    void set(QString inputusernametext){
        usernametext = inputusernametext;
    }
    QString get(){
        return usernametext;
    }
};
extern QString usernametext;
#endif // LOGINSCREEN_H
