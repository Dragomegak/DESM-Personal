#ifndef CREATEPROFILE_H
#define CREATEPROFILE_H

#include <QDialog>

namespace Ui {
class CreateProfile;
}

class CreateProfile : public QDialog
{
    Q_OBJECT

public:
    explicit CreateProfile(QWidget *parent = nullptr);
    ~CreateProfile();

private slots:
    void on_backButton_clicked();

    void on_addProgram_clicked();

private:
    Ui::CreateProfile *ui;
};

#endif // CREATEPROFILE_H
