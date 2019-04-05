/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *createProfileButton;
    QPushButton *loadProfileButton;
    QPushButton *switchUserButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *currentProfileLabel;
    QComboBox *comboBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *currentUserLabel;
    QLabel *showUsernameLabel;
    QPushButton *refreshButton;

    void setupUi(QDialog *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName(QString::fromUtf8("MainScreen"));
        MainScreen->resize(400, 300);
        layoutWidget = new QWidget(MainScreen);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 240, 254, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        createProfileButton = new QPushButton(layoutWidget);
        createProfileButton->setObjectName(QString::fromUtf8("createProfileButton"));

        horizontalLayout->addWidget(createProfileButton);

        loadProfileButton = new QPushButton(layoutWidget);
        loadProfileButton->setObjectName(QString::fromUtf8("loadProfileButton"));

        horizontalLayout->addWidget(loadProfileButton);

        switchUserButton = new QPushButton(layoutWidget);
        switchUserButton->setObjectName(QString::fromUtf8("switchUserButton"));

        horizontalLayout->addWidget(switchUserButton);

        layoutWidget1 = new QWidget(MainScreen);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 110, 261, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        currentProfileLabel = new QLabel(layoutWidget1);
        currentProfileLabel->setObjectName(QString::fromUtf8("currentProfileLabel"));

        horizontalLayout_2->addWidget(currentProfileLabel);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        layoutWidget2 = new QWidget(MainScreen);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(170, 10, 156, 16));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        currentUserLabel = new QLabel(layoutWidget2);
        currentUserLabel->setObjectName(QString::fromUtf8("currentUserLabel"));

        horizontalLayout_3->addWidget(currentUserLabel);

        showUsernameLabel = new QLabel(layoutWidget2);
        showUsernameLabel->setObjectName(QString::fromUtf8("showUsernameLabel"));

        horizontalLayout_3->addWidget(showUsernameLabel);

        refreshButton = new QPushButton(MainScreen);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(290, 110, 75, 23));

        retranslateUi(MainScreen);

        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QDialog *MainScreen)
    {
        MainScreen->setWindowTitle(QApplication::translate("MainScreen", "Dialog", nullptr));
        createProfileButton->setText(QApplication::translate("MainScreen", "Create Profile", nullptr));
        loadProfileButton->setText(QApplication::translate("MainScreen", "Load Profile", nullptr));
        switchUserButton->setText(QApplication::translate("MainScreen", "Switch User", nullptr));
        currentProfileLabel->setText(QApplication::translate("MainScreen", "Current Profile:", nullptr));
        currentUserLabel->setText(QApplication::translate("MainScreen", "Current User:", nullptr));
        showUsernameLabel->setText(QApplication::translate("MainScreen", "username", nullptr));
        refreshButton->setText(QApplication::translate("MainScreen", "refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
