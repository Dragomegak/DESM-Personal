/********************************************************************************
** Form generated from reading UI file 'editProfile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_H
#define UI_EDITPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProfile
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *currentProfileLabel;
    QLabel *showCurrentProfileLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *currentUserLabel;
    QLabel *showUsernameLabel;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addProgram;
    QPushButton *deleteProgram;
    QPushButton *backButton;
    QListWidget *listWidget;
    QPushButton *refresh;

    void setupUi(QDialog *EditProfile)
    {
        if (EditProfile->objectName().isEmpty())
            EditProfile->setObjectName(QString::fromUtf8("EditProfile"));
        EditProfile->resize(400, 300);
        layoutWidget_2 = new QWidget(EditProfile);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(38, 39, 221, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        currentProfileLabel = new QLabel(layoutWidget_2);
        currentProfileLabel->setObjectName(QString::fromUtf8("currentProfileLabel"));

        horizontalLayout_2->addWidget(currentProfileLabel);

        showCurrentProfileLabel = new QLabel(layoutWidget_2);
        showCurrentProfileLabel->setObjectName(QString::fromUtf8("showCurrentProfileLabel"));

        horizontalLayout_2->addWidget(showCurrentProfileLabel);

        layoutWidget = new QWidget(EditProfile);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(178, 9, 156, 16));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        currentUserLabel = new QLabel(layoutWidget);
        currentUserLabel->setObjectName(QString::fromUtf8("currentUserLabel"));

        horizontalLayout->addWidget(currentUserLabel);

        showUsernameLabel = new QLabel(layoutWidget);
        showUsernameLabel->setObjectName(QString::fromUtf8("showUsernameLabel"));

        horizontalLayout->addWidget(showUsernameLabel);

        layoutWidget_3 = new QWidget(EditProfile);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 259, 327, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        addProgram = new QPushButton(layoutWidget_3);
        addProgram->setObjectName(QString::fromUtf8("addProgram"));

        horizontalLayout_3->addWidget(addProgram);

        deleteProgram = new QPushButton(layoutWidget_3);
        deleteProgram->setObjectName(QString::fromUtf8("deleteProgram"));

        horizontalLayout_3->addWidget(deleteProgram);

        backButton = new QPushButton(layoutWidget_3);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout_3->addWidget(backButton);

        listWidget = new QListWidget(EditProfile);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 60, 256, 192));
        refresh = new QPushButton(EditProfile);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(300, 70, 75, 23));

        retranslateUi(EditProfile);

        QMetaObject::connectSlotsByName(EditProfile);
    } // setupUi

    void retranslateUi(QDialog *EditProfile)
    {
        EditProfile->setWindowTitle(QApplication::translate("EditProfile", "Dialog", nullptr));
        currentProfileLabel->setText(QApplication::translate("EditProfile", "Current Profile:", nullptr));
        showCurrentProfileLabel->setText(QApplication::translate("EditProfile", "None Selected", nullptr));
        currentUserLabel->setText(QApplication::translate("EditProfile", "Current User:", nullptr));
        showUsernameLabel->setText(QApplication::translate("EditProfile", "username", nullptr));
        addProgram->setText(QApplication::translate("EditProfile", "Add Program", nullptr));
        deleteProgram->setText(QApplication::translate("EditProfile", "Delete Last Program", nullptr));
        backButton->setText(QApplication::translate("EditProfile", "Back", nullptr));
        refresh->setText(QApplication::translate("EditProfile", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProfile: public Ui_EditProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
