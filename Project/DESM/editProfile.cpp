#include "editProfile.h"
#include "ui_editProfile.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

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
    QString username = "username";
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

void EditProfile::on_addProgram_clicked()
{
    const QString& currentprofile = ui->listWidget->currentItem()->text();
    QFile file(currentprofile);
    ui->showCurrentProfileLabel->setText(currentprofile);
    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("Add Program exe"),
                "C:\\Program Files (x86)",
                "All Files (*.*);; Exe Files (*.exe)"
                );
    if (file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append)){
        QTextStream stream(&file);
        stream << filename << endl;
        file.close();
    }
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
