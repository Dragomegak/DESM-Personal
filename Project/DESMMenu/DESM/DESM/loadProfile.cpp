#include "loadProfile.h"
#include "ui_loadProfile.h"

LoadProfile::LoadProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadProfile)
{
    ui->setupUi(this);
}

LoadProfile::~LoadProfile()
{
    delete ui;
}

void LoadProfile::on_backButton_clicked()
{
    this->hide();
    // Show the loginProfileScreen (i.e. the parent window)
    QWidget *parent = this->parentWidget();
    parent->show();
}

void LoadProfile::on_editProfileButton_clicked()
{
    this->hide(); //hides the login screen when sign in button is clicked
    editProfile = new EditProfile(this); //destructor for this culmination of windows
    editProfile->show(); //shows mainScreen.ui
}
