#include "createProfile.h"
#include "ui_createProfile.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QTextStream>
#include <QFileInfo>
#include <QtCore>
#include <QtGui>

CreateProfile::CreateProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateProfile)
{
    ui->setupUi(this);
    //assume the directory exists and contains some files and you want all jpg and JPG files
    QDir directory(".");
    QStringList files = directory.entryList(QStringList() << "*.txt" << "*.TXT",QDir::Files);
    foreach(QString filename, files) {
            ui->listWidget->addItem(filename);
    }
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
    QString profilename = ui->lineEdit->text() + ".txt";
    QString profile = profilename;

    QFile file(profile);
    if (file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append)){
        QTextStream stream(&file);
        stream << filename << endl;
        file.close();
    }


}

