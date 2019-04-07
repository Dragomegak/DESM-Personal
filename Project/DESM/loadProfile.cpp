#include "loadProfile.h"
#include "ui_loadProfile.h"
#include <QFile>
#include <QTextStream>
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include <QProcess>
#include <QDir>
#include <windows.h>
#include <QKeyEvent>
#include "loginScreen.h"

LoadProfile::LoadProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadProfile)
{
    ui->setupUi(this);
    QDir directory(".");
    QStringList files = directory.entryList(QStringList() << "*.txt" << "*.TXT",QDir::Files);
    foreach(QString filename, files) {
            ui->listWidget->addItem(filename);
    }

    QString username = usernametext;
    ui->showUsernameLabel->setText(username);
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

void LoadProfile::on_loadProfile_clicked()
{
        if(ui->listWidget->selectedItems().size() != 0){
            const QString& currentprofile = ui->listWidget->currentItem()->text();
            QFile file(currentprofile);
            //check file, if it exists continue
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
                QTextStream stream(&file);
                while (!stream.atEnd()){
                    QString line = stream.readLine();
                    QDesktopServices::openUrl(QUrl("file:///"+line, QUrl::TolerantMode));
                }
                file.close();
            }
        }
        else{
            QMessageBox::warning(this,tr("Error"),tr("Please click on a profile on the list"),QMessageBox::Ok);
        }

}

