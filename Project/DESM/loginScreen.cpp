#include "loginScreen.h"
#include "ui_loginScreen.h"
#include <QTextEdit>
#include <QDesktopServices>
#include <QFile>
#include <QProcess>
#include <QtDebug>
#include <QDir>

QString usernametext;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::usernameEmit()
{
    qDebug() << QDir::currentPath();
        if (!QDir::setCurrent(QCoreApplication::applicationDirPath()))
            qDebug() << "Could not change the current working directory";
    qDebug() << QDir::currentPath();
    QProcess *proc = new QProcess(this);
    proc->start("virgo.exe");
    usernametext = ui->usernameLineEdit->text();
    //emit username(ui->usernameLineEdit->text());

    hide(); //hides the login screen when sign in button is clicked
    mainScreen = new MainScreen(this); //destructor for this culmination of windows
    mainScreen->show(); //shows mainScreen.ui
}



//void MainWindow::on_signInButton_clicked()
//{
//    //login screen's sign-in button goes to main screen
//    //No authentication set yet
//    //Changed location of #include "mainscreen.h to login screen
//    //MainScreen mainScreen;
//    //mainScreen.setModal(true);
//    //mainScreen.exec();

//    //Shows Username
//    //QMessageBox::information(this, "Username", ui->usernameLineEdit->text());
//    //Stores Username
//    QProcess *proc = new QProcess(this);
//    proc->start("virgo.exe");
//    //setUsernameText(ui->usernameLineEdit->text());
//    //QMessageBox::information(this, "Username", getUsernameText());
//    //QMessageBox::information(this, "Username", user.get());
//    //should be deprecated
//    //username = ui->usernameLineEdit->text();

//    //Shows Password
//    //QMessageBox::information(this, "Password", ui->passwordLineEdit->text());
//    //Stores Password
//    //should be deprecated
//    //password = ui->passwordLineEdit->text();

//    //Example Authentication
////    if(username ==  "test" && password == "test") {
////            QMessageBox::information(this, "Login", "Username and password is correct");
////            //hide();
////            secDialog = new SecDialog(this);
////            secDialog->show();
////        }
////        else {
////            QMessageBox::warning(this,"Login", "Username and password is not correct");
////        }

//    hide(); //hides the login screen when sign in button is clicked
//    mainScreen = new MainScreen(this); //destructor for this culmination of windows
//    mainScreen->show(); //shows mainScreen.ui
//}
