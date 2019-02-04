#ifndef LOADPROFILE_H
#define LOADPROFILE_H

#include <QDialog>

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

private:
    Ui::LoadProfile *ui;
};

#endif // LOADPROFILE_H
