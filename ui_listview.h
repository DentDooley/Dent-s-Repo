/********************************************************************************
** Form generated from reading UI file 'listview.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTVIEW_H
#define UI_LISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_listView
{
public:
    QListView *listView_2;
    QLabel *label;

    void setupUi(QDialog *listView)
    {
        if (listView->objectName().isEmpty())
            listView->setObjectName(QStringLiteral("listView"));
        listView->resize(400, 300);
        listView_2 = new QListView(listView);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(10, 10, 381, 251));
        label = new QLabel(listView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 401, 301));
        label->setPixmap(QPixmap(QString::fromUtf8("assets/sand.jpg")));
        label->setScaledContents(true);
        label->raise();
        listView_2->raise();

        retranslateUi(listView);

        QMetaObject::connectSlotsByName(listView);
    } // setupUi

    void retranslateUi(QDialog *listView)
    {
        listView->setWindowTitle(QApplication::translate("listView", "Dialog", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class listView: public Ui_listView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTVIEW_H
