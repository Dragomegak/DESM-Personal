#include "editProfile.h"
#include "ui_editProfile.h"
#include <QFileDialog>
#include <QMessageBox>

EditProfile::EditProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditProfile)
{
    ui->setupUi(this);
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
    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("Add Program exe"),
                "C:\\Program Files (x86)",
                "All Files (*.*);; Exe Files (*.exe)"
                );
    QMessageBox::information(this, tr("File Name"), filename);
}
