/********************************************************************************
** Form generated from reading UI file 'editmembers.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMEMBERS_H
#define UI_EDITMEMBERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editmembers
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *editmembers)
    {
        if (editmembers->objectName().isEmpty())
            editmembers->setObjectName(QStringLiteral("editmembers"));
        editmembers->resize(503, 229);
        layoutWidget = new QWidget(editmembers);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 40, 191, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        layoutWidget_2 = new QWidget(editmembers);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 50, 81, 152));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAutoFillBackground(true);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAutoFillBackground(true);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAutoFillBackground(true);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAutoFillBackground(true);

        verticalLayout_2->addWidget(label_9);

        pushButton = new QPushButton(editmembers);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 180, 80, 22));
        label = new QLabel(editmembers);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-4, -6, 511, 241));
        label->setPixmap(QPixmap(QString::fromUtf8("assets/pots.png")));
        label->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        pushButton->raise();

        retranslateUi(editmembers);

        QMetaObject::connectSlotsByName(editmembers);
    } // setupUi

    void retranslateUi(QDialog *editmembers)
    {
        editmembers->setWindowTitle(QApplication::translate("editmembers", "Dialog", 0));
        label_6->setText(QApplication::translate("editmembers", "Name:", 0));
        label_7->setText(QApplication::translate("editmembers", "Address:", 0));
        label_8->setText(QApplication::translate("editmembers", "City/State/Zip:", 0));
        label_9->setText(QApplication::translate("editmembers", "Interest", 0));
        pushButton->setText(QApplication::translate("editmembers", "Submit", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editmembers: public Ui_editmembers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMEMBERS_H
