#ifndef EDITMEMBERS_H
#define EDITMEMBERS_H

#include <QDialog>

namespace Ui {
class editmembers;
}

class editmembers : public QDialog
{
    Q_OBJECT

public:
    explicit editmembers(QWidget *parent = 0);
    ~editmembers();

private:
    Ui::editmembers *ui;
};

#endif // EDITMEMBERS_H
