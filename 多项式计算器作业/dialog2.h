#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include "polynomial.h"

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = 0);
    ~Dialog2();

private slots:
    void on_pushButton1_clicked();
    void on_add_clicked();
    void on_edit_clicked();
    void on_del_clicked();

private:
    Ui::Dialog2 *ui;
public:
    int n,i=0;
    Polynomial p2;
};

#endif // DIALOG2_H
