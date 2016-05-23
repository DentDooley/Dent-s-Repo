#ifndef LISTVIEW_H
#define LISTVIEW_H


#include <QDialog>


namespace Ui {
class listView;
}

class listView : public QDialog
{
    Q_OBJECT

public:
    explicit listView(QWidget *parent = 0);
    ~listView();

private slots:
    void on_pushButton_clicked();

    void on_finishedButton_clicked();

private:
    Ui::listView *ui;

};

#endif // LISTVIEW_H
