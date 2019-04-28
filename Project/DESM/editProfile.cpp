#include "editProfile.h"
#include "ui_editProfile.h"
#include "loginScreen.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

EditProfile::EditProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditProfile)
{
    ui->setupUi(this);
    //Prereq to loading list
    QDir directory(".");
    QStringList files = directory.entryList(QStringList() << "*.txt" << "*.TXT",QDir::Files);
    foreach(QString filename, files) {
            ui->listWidget->addItem(filename);
    }
    QString username = usernametext;
    ui->showUsernameLabel->setText(username);
}

EditProfile::~EditProfile()
{
    delete ui;
}

void EditProfile::on_backButton_clicked()
{
        this->hide();
        // Show the loginProfileScreen (i.e. the parent window)
        QWidget *parent = this->parentWidget();
        parent->show();
}


void EditProfile::on_refresh_clicked()
{
    ui->listWidget->clear();
    QDir directory(".");
    QStringList files = directory.entryList(QStringList() << "*.txt" << "*.TXT",QDir::Files);
    foreach(QString filename, files) {
            ui->listWidget->addItem(filename);
    }
}

void EditProfile::on_deleteFile_clicked()
{
    if (ui->listWidget->selectedItems().size() != 0){
        const QString& currentprofile = ui->listWidget->currentItem()->text();
        QFile file(currentprofile);
        file.remove();
    }
    else{
        QMessageBox::warning(this,tr("Error"),tr("Please click on a profile on the list"),QMessageBox::Ok);
    }
    ui->listWidget->clear();
    QDir directory(".");
    QStringList files = directory.entryList(QStringList() << "*.txt" << "*.TXT",QDir::Files);
    foreach(QString filename, files) {
            ui->listWidget->addItem(filename);
    }
}
