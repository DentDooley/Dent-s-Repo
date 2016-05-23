#include "adminform.h"
#include "ui_adminform.h"
#include "listview.h"

adminform::adminform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminform)
{
    ui->setupUi(this);
}

adminform::~adminform()
{
    delete ui;
}


void adminform::on_viewPrintList_clicked()
{
   list.show();
}

void adminform::on_addDeleteMem_clicked()
{
    memPage.show();
}
