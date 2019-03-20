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

public slots:
    void setUsernameText(QString input){username = input;}
    QString getUsernameText(){return username;}

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

#endif // LOGINSCREEN_H
