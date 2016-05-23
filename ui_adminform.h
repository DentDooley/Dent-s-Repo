/********************************************************************************
** Form generated from reading UI file 'adminform.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINFORM_H
#define UI_ADMINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminform
{
public:
    QPushButton *addDeleteMem;
    QPushButton *viewPrintList;
    QPushButton *updateList;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *adminform)
    {
        if (adminform->objectName().isEmpty())
            adminform->setObjectName(QStringLiteral("adminform"));
        adminform->resize(507, 198);
        addDeleteMem = new QPushButton(adminform);
        addDeleteMem->setObjectName(QStringLiteral("addDeleteMem"));
        addDeleteMem->setGeometry(QRect(10, 110, 141, 22));
        viewPrintList = new QPushButton(adminform);
        viewPrintList->setObjectName(QStringLiteral("viewPrintList"));
        viewPrintList->setGeometry(QRect(40, 130, 80, 22));
        updateList = new QPushButton(adminform);
        updateList->setObjectName(QStringLiteral("updateList"));
        updateList->setGeometry(QRect(10, 150, 141, 22));
        label = new QLabel(adminform);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 521, 211));
        label->setPixmap(QPixmap(QString::fromUtf8("assets/pots.png")));
        label->setScaledContents(false);
        label_2 = new QLabel(adminform);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 150, 61, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8("assets/TeamDirtSolo.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label->raise();
        addDeleteMem->raise();
        viewPrintList->raise();
        updateList->raise();
        label_2->raise();

        retranslateUi(adminform);

        QMetaObject::connectSlotsByName(adminform);
    } // setupUi

    void retranslateUi(QWidget *adminform)
    {
        adminform->setWindowTitle(QApplication::translate("adminform", "Form", 0));
        addDeleteMem->setText(QApplication::translate("adminform", "Add/Delete Member", 0));
        viewPrintList->setText(QApplication::translate("adminform", "View/Print List", 0));
        updateList->setText(QApplication::translate("adminform", "Update Customer List", 0));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminform: public Ui_adminform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINFORM_H
