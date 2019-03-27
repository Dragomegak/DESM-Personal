/********************************************************************************
** Form generated from reading UI file 'loginScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QPushButton *createAccountButton;
    QCheckBox *defaultUserCheckbox;
    QPushButton *resetPasswordButton;
    QPushButton *signInButton;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        usernameLabel = new QLabel(centralWidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(30, 90, 61, 16));
        passwordLabel = new QLabel(centralWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(30, 120, 51, 16));
        createAccountButton = new QPushButton(centralWidget);
        createAccountButton->setObjectName(QString::fromUtf8("createAccountButton"));
        createAccountButton->setGeometry(QRect(50, 150, 91, 23));
        defaultUserCheckbox = new QCheckBox(centralWidget);
        defaultUserCheckbox->setObjectName(QString::fromUtf8("defaultUserCheckbox"));
        defaultUserCheckbox->setGeometry(QRect(250, 150, 91, 17));
        resetPasswordButton = new QPushButton(centralWidget);
        resetPasswordButton->setObjectName(QString::fromUtf8("resetPasswordButton"));
        resetPasswordButton->setGeometry(QRect(94, 210, 91, 23));
        signInButton = new QPushButton(centralWidget);
        signInButton->setObjectName(QString::fromUtf8("signInButton"));
        signInButton->setGeometry(QRect(200, 210, 75, 23));
        usernameLineEdit = new QLineEdit(centralWidget);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(100, 90, 231, 20));
        passwordLineEdit = new QLineEdit(centralWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(100, 120, 231, 20));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(signInButton, SIGNAL(clicked()), MainWindow, SLOT(usernameEmit()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        usernameLabel->setText(QApplication::translate("MainWindow", "Username:", nullptr));
        passwordLabel->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        createAccountButton->setText(QApplication::translate("MainWindow", "Create Account", nullptr));
        defaultUserCheckbox->setText(QApplication::translate("MainWindow", "Default User", nullptr));
        resetPasswordButton->setText(QApplication::translate("MainWindow", "Reset Password", nullptr));
        signInButton->setText(QApplication::translate("MainWindow", "Sign In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
