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
