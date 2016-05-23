#include "editmembers.h"
#include "ui_editmembers.h"

editmembers::editmembers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editmembers)
{
    ui->setupUi(this);
}

editmembers::~editmembers()
{
    delete ui;
}
