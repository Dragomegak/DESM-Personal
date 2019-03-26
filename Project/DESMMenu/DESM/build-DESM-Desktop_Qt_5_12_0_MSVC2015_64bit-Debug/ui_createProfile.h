/********************************************************************************
** Form generated from reading UI file 'createProfile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROFILE_H
#define UI_CREATEPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateProfile
{
public:
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addProgram;
    QPushButton *backButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *profileNameLabel;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *currentUserLabel;
    QLabel *showUsernameLabel;
    QListWidget *listWidget;
    QPushButton *refresh;

    void setupUi(QDialog *CreateProfile)
    {
        if (CreateProfile->objectName().isEmpty())
            CreateProfile->setObjectName(QString::fromUtf8("CreateProfile"));
        CreateProfile->resize(400, 300);
        layoutWidget_3 = new QWidget(CreateProfile);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(32, 260, 327, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        addProgram = new QPushButton(layoutWidget_3);
        addProgram->setObjectName(QString::fromUtf8("addProgram"));

        horizontalLayout_3->addWidget(addProgram);

        backButton = new QPushButton(layoutWidget_3);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout_3->addWidget(backButton);

        layoutWidget_2 = new QWidget(CreateProfile);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 40, 221, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        profileNameLabel = new QLabel(layoutWidget_2);
        profileNameLabel->setObjectName(QString::fromUtf8("profileNameLabel"));

        horizontalLayout_2->addWidget(profileNameLabel);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        layoutWidget = new QWidget(CreateProfile);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 10, 153, 15));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        currentUserLabel = new QLabel(layoutWidget);
        currentUserLabel->setObjectName(QString::fromUtf8("currentUserLabel"));

        horizontalLayout->addWidget(currentUserLabel);

        showUsernameLabel = new QLabel(layoutWidget);
        showUsernameLabel->setObjectName(QString::fromUtf8("showUsernameLabel"));

        horizontalLayout->addWidget(showUsernameLabel);

        listWidget = new QListWidget(CreateProfile);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(50, 60, 256, 192));
        refresh = new QPushButton(CreateProfile);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(310, 60, 75, 23));

        retranslateUi(CreateProfile);

        QMetaObject::connectSlotsByName(CreateProfile);
    } // setupUi

    void retranslateUi(QDialog *CreateProfile)
    {
        CreateProfile->setWindowTitle(QApplication::translate("CreateProfile", "Dialog", nullptr));
        addProgram->setText(QApplication::translate("CreateProfile", "Add Program", nullptr));
        backButton->setText(QApplication::translate("CreateProfile", "Back", nullptr));
        profileNameLabel->setText(QApplication::translate("CreateProfile", "Set Profile Name:", nullptr));
        currentUserLabel->setText(QApplication::translate("CreateProfile", "Current User:", nullptr));
        showUsernameLabel->setText(QApplication::translate("CreateProfile", "not implemented", nullptr));
        refresh->setText(QApplication::translate("CreateProfile", "refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateProfile: public Ui_CreateProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROFILE_H
