#include "createProfile.h"
#include "ui_createProfile.h"
#include <QFileDialog>
#include <QMessageBox>

CreateProfile::CreateProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateProfile)
{
    ui->setupUi(this);
}

CreateProfile::~CreateProfile()
{
    delete ui;
}

void CreateProfile::on_backButton_clicked()
{
    this->hide();
    // Show the loginProfileScreen (i.e. the parent window)
    QWidget *parent = this->parentWidget();
    parent->show();
}

void CreateProfile::on_addProgram_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("Add Program exe"),
                "C:\\Program Files (x86)",
                "All Files (*.*);; Exe Files (*.exe)"
                );
    QMessageBox::information(this, tr("File Name"), filename);
}
