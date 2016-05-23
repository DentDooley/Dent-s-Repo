#ifndef ADMINFORM_H
#define ADMINFORM_H

#include <QWidget>
#include "listview.h"
#include "editmembers.h"

namespace Ui {
class adminform;
}

class adminform : public QWidget
{
    Q_OBJECT

public:
    explicit adminform(QWidget *parent = 0);
    ~adminform();

private slots:

    void on_viewPrintList_clicked();

    void on_addDeleteMem_clicked();

private:
    Ui::adminform *ui;
    listView list;
    editmembers memPage;
};

#endif // ADMINFORM_H
