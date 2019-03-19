#ifndef LOADPROFILE_H
#define LOADPROFILE_H

#include <QDialog>
#include "editProfile.h"

namespace Ui {
class LoadProfile;
}

class LoadProfile : public QDialog
{
    Q_OBJECT

public:
    explicit LoadProfile(QWidget *parent = nullptr);
    ~LoadProfile();

private slots:
    void on_backButton_clicked();

    void on_editProfileButton_clicked();

    void on_loadProfile_clicked();

private:
    Ui::LoadProfile *ui;
    EditProfile *editProfile;
};

#endif // LOADPROFILE_H
