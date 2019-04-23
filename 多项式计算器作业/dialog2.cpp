#include "dialog2.h"
#include "ui_dialog2.h"
#include "polynomial.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton1_clicked()
{
    QString s;
    s = ui->lineEdit1->text();
    n = s.toInt();
    p2.n = n;
    for(int i=0; i<n; ++i)
        p2.a.push_back(0);
}

void Dialog2::on_add_clicked()
{
    QString temp;
    if(i<n)
    {
        temp = ui->lineEdit2->text();
        if(temp != "")
        {
            ui->listWidget->addItem(temp);
            p2.a[i++] = temp.toDouble();
        }
    }
    ui->lineEdit2->clear();
}

void Dialog2::on_edit_clicked()
{
    QString temp;
    temp = ui->lineEdit2->text();
    int row = ui->listWidget->currentRow();
    ui->listWidget->item(row)->setText(temp);
    if(temp=="")
    {
        p2.a[row] = 0;
        ui->listWidget->item(row)->setText("0");
    }
    else
        p2.a[row] = temp.toDouble();
    ui->lineEdit2->clear();
}

void Dialog2::on_del_clicked()
{
    int row = ui->listWidget->currentRow();
    ui->listWidget->takeItem(row);
    p2.a.erase(p2.a.begin()+row);
    --i;
}
