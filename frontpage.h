#ifndef FRONTPAGE_H
#define FRONTPAGE_H

#include <QMainWindow>
#include "header.h"
#include "adminlogin.h"


namespace Ui {
class FrontPage;
}

class FrontPage : public QMainWindow
{
    Q_OBJECT



public:
    explicit FrontPage(QWidget *parent = 0);
    ~FrontPage();


private slots:

    void on_actionContact_Us_3_triggered();

    void on_pushButton_2_clicked();

    void on_actionHelp_triggered();

    void on_actionHelp_Using_Our_Program_triggered();

    void on_actionLogin_triggered();

private:
    Ui::FrontPage *ui;
    adminlogin adLog;
};

#endif // FRONTPAGE_H
