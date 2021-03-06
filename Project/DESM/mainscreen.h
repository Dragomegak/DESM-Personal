#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QDialog>
#include "loadProfile.h"
#include "createProfile.h"
#include "editProfile.h"

namespace Ui {
class MainScreen;
}

class MainScreen : public QDialog
{
    Q_OBJECT
signals:

public:
    explicit MainScreen(QWidget *parent = nullptr);
    ~MainScreen();
    QString username;


private slots:
    void on_createProfileButton_clicked();

    void on_switchUserButton_clicked();

    void on_loadProfileButton_clicked();

    void on_refreshButton_clicked();

private:
    Ui::MainScreen *ui;
    LoadProfile *loadProfile;
    CreateProfile *createProfile;
    EditProfile *editProfile;
};

#endif // MAINSCREEN_H
