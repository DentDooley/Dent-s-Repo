#include "listview.h"
#include "ui_listview.h"



listView::listView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listView)
{
    ui->setupUi(this);
}

listView::~listView()
{
    delete ui;
}

void listView::on_finishedButton_clicked()
{
    this->hide();
}
