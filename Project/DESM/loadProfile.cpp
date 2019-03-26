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

    QString username = "username";
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

        const QString& currentprofile = ui->listWidget->currentItem()->text();
        QFile file(currentprofile);
        //check file, if it exists continue
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream stream(&file);
            while (!stream.atEnd()){
                QString line = stream.readLine();
                QDesktopServices::openUrl(QUrl("file:///"+line, QUrl::TolerantMode));
            }
        }
        else{
            QMessageBox messageBox;
            messageBox.critical(0, "Error", "Profile not made, please create a profile");
            messageBox.setFixedSize(100,100);
        }
        file.close();
}

void LoadProfile::on_loadInBackgroundButton_clicked()
{
    //QKeyEvent * evt = new QKeyEvent(QEvent::Type::KeyPress, Qt::Key_2, Qt::ControlModifier); this works
    //QCoreApplication::postEvent(reciever, evt); this doesnt
}
