#include "createProfile.h"
#include "ui_createProfile.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QTextStream>
#include <QFileInfo>

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

    if (QFileInfo("Profile.txt").exists()){

        QFile file("profile.txt");
        QTextStream outstream(&file);
        outstream << filename << endl;
        file.close();
    }
    else{
        //If not found create it
        QFile file("profile.txt");
        if (!file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append))
        return;

        //goes to the end, takes the string of filename (presumably path) and appends at the end of file
        //if (file.atEnd()){
        //    file.write(filename.toUtf8());
        //}
    }


    //handles launching of the exe
    //QDesktopServices::openUrl(QUrl("file:///"+filename, QUrl::TolerantMode));
    //QMessageBox::information(this, tr("File Name"), filename);

}
