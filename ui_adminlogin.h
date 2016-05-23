/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminlogin
{
public:
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QWidget *adminlogin)
    {
        if (adminlogin->objectName().isEmpty())
            adminlogin->setObjectName(QStringLiteral("adminlogin"));
        adminlogin->resize(509, 194);
        passwordInput = new QLineEdit(adminlogin);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));
        passwordInput->setGeometry(QRect(180, 100, 113, 21));
        loginButton = new QPushButton(adminlogin);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(150, 130, 80, 22));
        pushButton = new QPushButton(adminlogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 130, 80, 22));
        label_2 = new QLabel(adminlogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 511, 201));
        label_2->setPixmap(QPixmap(QString::fromUtf8("assets/pots.png")));
        label_2->raise();
        passwordInput->raise();
        loginButton->raise();
        pushButton->raise();

        retranslateUi(adminlogin);

        QMetaObject::connectSlotsByName(adminlogin);
    } // setupUi

    void retranslateUi(QWidget *adminlogin)
    {
        adminlogin->setWindowTitle(QApplication::translate("adminlogin", "Form", 0));
        loginButton->setText(QApplication::translate("adminlogin", "Login", 0));
        pushButton->setText(QApplication::translate("adminlogin", "cancel", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminlogin: public Ui_adminlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
