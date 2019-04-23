#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include "polynomial.h"

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private slots:
    void on_pushButton1_clicked();
    void on_add_clicked();
    void on_edit_clicked();
    void on_del_clicked();

private:
    Ui::Dialog1 *ui;
public:
    int n,i=0;
    Polynomial p1;
};

#endif // DIALOG1_H
