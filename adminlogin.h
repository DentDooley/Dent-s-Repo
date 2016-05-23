#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include "header.h"
#include "adminform.h"
#include <QWidget>

namespace Ui {
class adminlogin;
}

class adminlogin : public QWidget
{
    Q_OBJECT

public:
    explicit adminlogin(QWidget *parent = 0);
    ~adminlogin();

private slots:
    void on_loginButton_clicked();

private:
    Ui::adminlogin *ui;
    adminform adForm;

};

#endif // ADMINLOGIN_H
