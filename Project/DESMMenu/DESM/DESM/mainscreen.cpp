#include "mainscreen.h"
#include "ui_mainscreen.h"
#include "loginScreen.h"
#include <QDir>

MainScreen::MainScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);
    QDir directory(".");
    QStringList files = directory.entryList(QStringList() << "*.txt" << "*.TXT",QDir::Files);
    foreach(QString filename, files){
        ui->comboBox->addItem(filename);
    }
    QString username = "username";
    ui->showUsernameLabel->setText(username);
}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::on_createProfileButton_clicked()
{
    this->hide(); //hides the login screen when sign in button is clicked
    createProfile = new CreateProfile(this);
    createProfile->show();
}

void MainScreen::on_switchUserButton_clicked()
{
    this->hide();
    // Show the loginScreen (i.e. the parent window)
    QWidget *parent = this->parentWidget();
    parent->show();
}

void MainScreen::on_loadProfileButton_clicked()
{
    this->hide(); //hides the login screen when sign in button is clicked
    loadProfile = new LoadProfile(this); //destructor for this culmination of windows
    loadProfile->show(); //shows mainScreen.ui
}
