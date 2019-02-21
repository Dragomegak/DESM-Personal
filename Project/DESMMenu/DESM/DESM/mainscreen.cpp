#include "mainscreen.h"
#include "ui_mainscreen.h"

MainScreen::MainScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);

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
