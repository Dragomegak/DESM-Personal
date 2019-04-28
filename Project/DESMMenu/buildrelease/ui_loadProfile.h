/********************************************************************************
** Form generated from reading UI file 'loadProfile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADPROFILE_H
#define UI_LOADPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadProfile
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *currentUserLabel;
    QLabel *showUsernameLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *currentProfileLabel;
    QLabel *showCurrentProfileLabel;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loadProfile;
    QPushButton *editProfileButton;
    QPushButton *backButton;
    QListWidget *listWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *desktopOneButton;
    QPushButton *desktopTwoButton;
    QPushButton *desktopThreeButton;
    QPushButton *desktopFourButton;

    void setupUi(QDialog *LoadProfile)
    {
        if (LoadProfile->objectName().isEmpty())
            LoadProfile->setObjectName(QString::fromUtf8("LoadProfile"));
        LoadProfile->resize(400, 300);
        layoutWidget = new QWidget(LoadProfile);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(208, 10, 156, 16));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        currentUserLabel = new QLabel(layoutWidget);
        currentUserLabel->setObjectName(QString::fromUtf8("currentUserLabel"));

        horizontalLayout->addWidget(currentUserLabel);

        showUsernameLabel = new QLabel(layoutWidget);
        showUsernameLabel->setObjectName(QString::fromUtf8("showUsernameLabel"));

        horizontalLayout->addWidget(showUsernameLabel);

        layoutWidget1 = new QWidget(LoadProfile);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(68, 40, 164, 16));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        currentProfileLabel = new QLabel(layoutWidget1);
        currentProfileLabel->setObjectName(QString::fromUtf8("currentProfileLabel"));

        horizontalLayout_2->addWidget(currentProfileLabel);

        showCurrentProfileLabel = new QLabel(layoutWidget1);
        showCurrentProfileLabel->setObjectName(QString::fromUtf8("showCurrentProfileLabel"));

        horizontalLayout_2->addWidget(showCurrentProfileLabel);

        layoutWidget2 = new QWidget(LoadProfile);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 260, 371, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        loadProfile = new QPushButton(layoutWidget2);
        loadProfile->setObjectName(QString::fromUtf8("loadProfile"));

        horizontalLayout_3->addWidget(loadProfile);

        editProfileButton = new QPushButton(layoutWidget2);
        editProfileButton->setObjectName(QString::fromUtf8("editProfileButton"));

        horizontalLayout_3->addWidget(editProfileButton);

        backButton = new QPushButton(layoutWidget2);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout_3->addWidget(backButton);

        listWidget = new QListWidget(LoadProfile);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(70, 60, 256, 161));
        widget = new QWidget(LoadProfile);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 230, 340, 24));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        desktopOneButton = new QPushButton(widget);
        desktopOneButton->setObjectName(QString::fromUtf8("desktopOneButton"));

        horizontalLayout_4->addWidget(desktopOneButton);

        desktopTwoButton = new QPushButton(widget);
        desktopTwoButton->setObjectName(QString::fromUtf8("desktopTwoButton"));

        horizontalLayout_4->addWidget(desktopTwoButton);

        desktopThreeButton = new QPushButton(widget);
        desktopThreeButton->setObjectName(QString::fromUtf8("desktopThreeButton"));

        horizontalLayout_4->addWidget(desktopThreeButton);

        desktopFourButton = new QPushButton(widget);
        desktopFourButton->setObjectName(QString::fromUtf8("desktopFourButton"));

        horizontalLayout_4->addWidget(desktopFourButton);


        retranslateUi(LoadProfile);

        QMetaObject::connectSlotsByName(LoadProfile);
    } // setupUi

    void retranslateUi(QDialog *LoadProfile)
    {
        LoadProfile->setWindowTitle(QApplication::translate("LoadProfile", "Dialog", nullptr));
        currentUserLabel->setText(QApplication::translate("LoadProfile", "Current User:", nullptr));
        showUsernameLabel->setText(QApplication::translate("LoadProfile", "username", nullptr));
        currentProfileLabel->setText(QApplication::translate("LoadProfile", "Current Profile:", nullptr));
        showCurrentProfileLabel->setText(QApplication::translate("LoadProfile", "None Selected", nullptr));
        loadProfile->setText(QApplication::translate("LoadProfile", "Load Profile", nullptr));
        editProfileButton->setText(QApplication::translate("LoadProfile", "Edit Profile", nullptr));
        backButton->setText(QApplication::translate("LoadProfile", "Back", nullptr));
        desktopOneButton->setText(QApplication::translate("LoadProfile", "Desktop 1", nullptr));
        desktopTwoButton->setText(QApplication::translate("LoadProfile", "Desktop 2", nullptr));
        desktopThreeButton->setText(QApplication::translate("LoadProfile", "Desktop 3", nullptr));
        desktopFourButton->setText(QApplication::translate("LoadProfile", "Desktop 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadProfile: public Ui_LoadProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADPROFILE_H
