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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadProfile
{
public:
    QListView *applicationListView;
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
    QPushButton *editProfileButton;
    QPushButton *loadInBackgroundButton;
    QPushButton *loadProfile;
    QPushButton *backButton;

    void setupUi(QDialog *LoadProfile)
    {
        if (LoadProfile->objectName().isEmpty())
            LoadProfile->setObjectName(QString::fromUtf8("LoadProfile"));
        LoadProfile->resize(400, 300);
        applicationListView = new QListView(LoadProfile);
        applicationListView->setObjectName(QString::fromUtf8("applicationListView"));
        applicationListView->setGeometry(QRect(70, 60, 256, 192));
        layoutWidget = new QWidget(LoadProfile);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(208, 10, 153, 15));
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
        layoutWidget1->setGeometry(QRect(68, 40, 161, 15));
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
        layoutWidget2->setGeometry(QRect(50, 260, 327, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        editProfileButton = new QPushButton(layoutWidget2);
        editProfileButton->setObjectName(QString::fromUtf8("editProfileButton"));

        horizontalLayout_3->addWidget(editProfileButton);

        loadInBackgroundButton = new QPushButton(layoutWidget2);
        loadInBackgroundButton->setObjectName(QString::fromUtf8("loadInBackgroundButton"));

        horizontalLayout_3->addWidget(loadInBackgroundButton);

        loadProfile = new QPushButton(layoutWidget2);
        loadProfile->setObjectName(QString::fromUtf8("loadProfile"));

        horizontalLayout_3->addWidget(loadProfile);

        backButton = new QPushButton(layoutWidget2);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout_3->addWidget(backButton);


        retranslateUi(LoadProfile);

        QMetaObject::connectSlotsByName(LoadProfile);
    } // setupUi

    void retranslateUi(QDialog *LoadProfile)
    {
        LoadProfile->setWindowTitle(QApplication::translate("LoadProfile", "Dialog", nullptr));
        currentUserLabel->setText(QApplication::translate("LoadProfile", "Current User:", nullptr));
        showUsernameLabel->setText(QApplication::translate("LoadProfile", "not implemented", nullptr));
        currentProfileLabel->setText(QApplication::translate("LoadProfile", "Current Profile:", nullptr));
        showCurrentProfileLabel->setText(QApplication::translate("LoadProfile", "not implemented", nullptr));
        editProfileButton->setText(QApplication::translate("LoadProfile", "Edit Profile", nullptr));
        loadInBackgroundButton->setText(QApplication::translate("LoadProfile", "Load in BG", nullptr));
        loadProfile->setText(QApplication::translate("LoadProfile", "Load Profile", nullptr));
        backButton->setText(QApplication::translate("LoadProfile", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadProfile: public Ui_LoadProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADPROFILE_H
