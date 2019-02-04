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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *currentUserLabel;
    QLabel *showUsernameLabel;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *currentProfileLabel;
    QLabel *showCurrentProfileLabel;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addProgramButton;
    QPushButton *deleteProgramButton;
    QPushButton *backButton;

    void setupUi(QDialog *LoadProfile)
    {
        if (LoadProfile->objectName().isEmpty())
            LoadProfile->setObjectName(QString::fromUtf8("LoadProfile"));
        LoadProfile->resize(400, 300);
        applicationListView = new QListView(LoadProfile);
        applicationListView->setObjectName(QString::fromUtf8("applicationListView"));
        applicationListView->setGeometry(QRect(70, 60, 256, 192));
        widget = new QWidget(LoadProfile);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(208, 10, 153, 15));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        currentUserLabel = new QLabel(widget);
        currentUserLabel->setObjectName(QString::fromUtf8("currentUserLabel"));

        horizontalLayout->addWidget(currentUserLabel);

        showUsernameLabel = new QLabel(widget);
        showUsernameLabel->setObjectName(QString::fromUtf8("showUsernameLabel"));

        horizontalLayout->addWidget(showUsernameLabel);

        widget1 = new QWidget(LoadProfile);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(68, 40, 161, 15));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        currentProfileLabel = new QLabel(widget1);
        currentProfileLabel->setObjectName(QString::fromUtf8("currentProfileLabel"));

        horizontalLayout_2->addWidget(currentProfileLabel);

        showCurrentProfileLabel = new QLabel(widget1);
        showCurrentProfileLabel->setObjectName(QString::fromUtf8("showCurrentProfileLabel"));

        horizontalLayout_2->addWidget(showCurrentProfileLabel);

        widget2 = new QWidget(LoadProfile);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(70, 260, 246, 25));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        addProgramButton = new QPushButton(widget2);
        addProgramButton->setObjectName(QString::fromUtf8("addProgramButton"));

        horizontalLayout_3->addWidget(addProgramButton);

        deleteProgramButton = new QPushButton(widget2);
        deleteProgramButton->setObjectName(QString::fromUtf8("deleteProgramButton"));

        horizontalLayout_3->addWidget(deleteProgramButton);

        backButton = new QPushButton(widget2);
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
        addProgramButton->setText(QApplication::translate("LoadProfile", "Add Program", nullptr));
        deleteProgramButton->setText(QApplication::translate("LoadProfile", "Delete Program", nullptr));
        backButton->setText(QApplication::translate("LoadProfile", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadProfile: public Ui_LoadProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADPROFILE_H
