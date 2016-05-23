#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "adminform.h"
#include "header.h"
#include <qmessagebox.h>


adminlogin::adminlogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminlogin)
{
    ui->setupUi(this);
}

adminlogin::~adminlogin()
{
    delete ui;
}

void adminlogin::on_loginButton_clicked()
{
    QString adminPassword = "thedirtiest";
    QString givenPassword;
    givenPassword = ui->passwordInput->text();

    if(givenPassword==adminPassword)
    {
        adForm.show();
        hide();
    }else{
        QMessageBox::information(this, "Wrong Password", "Entered wrong password");

    }

}
