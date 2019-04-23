#include "dialog1.h"
#include "ui_dialog1.h"
#include "polynomial.h"

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton1_clicked()
{
    QString s;
    s = ui->lineEdit1->text();
    n = s.toInt();
    p1.n = n;
    for(int i=0; i<n; ++i)
        p1.a.push_back(0);
}

void Dialog1::on_add_clicked()
{
    QString temp;
    if(i<n)
    {
        temp = ui->lineEdit2->text();
        if(temp != "")
        {
            ui->listWidget->addItem(temp);
            p1.a[i++] = temp.toDouble();
        }
    }
    ui->lineEdit2->clear();
}

void Dialog1::on_edit_clicked()
{
    QString temp;
    temp = ui->lineEdit2->text();
    int row = ui->listWidget->currentRow();
    ui->listWidget->item(row)->setText(temp);
    if(temp=="")
    {
        p1.a[row] = 0;
        ui->listWidget->item(row)->setText("0");
    }
    else
        p1.a[row] = temp.toDouble();
    ui->lineEdit2->clear();
}

void Dialog1::on_del_clicked()
{
    int row = ui->listWidget->currentRow();
    ui->listWidget->takeItem(row);
    p1.a.erase(p1.a.begin()+row);
    --i;
}
