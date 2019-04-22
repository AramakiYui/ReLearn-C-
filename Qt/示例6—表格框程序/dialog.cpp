#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_add_clicked()
{
    QString temp1,temp2;
    temp1=ui->lineEdit1->text();
    temp2=ui->lineEdit2->text();
    int row=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    ui->tableWidget->setItem(row,0,new QTableWidgetItem(temp1));
    ui->tableWidget->setItem(row,1,new QTableWidgetItem(temp2));
    ui->lineEdit1->clear();
    ui->lineEdit2->clear();
}

void Dialog::on_edit_clicked()
{
    QString temp1,temp2;
    temp1=ui->lineEdit1->text();
    temp2=ui->lineEdit2->text();
    int row=ui->tableWidget->currentRow();
    ui->tableWidget->setItem(row,0,new QTableWidgetItem(temp1));
    ui->tableWidget->setItem(row,1,new QTableWidgetItem(temp2));
    ui->lineEdit1->clear();
    ui->lineEdit2->clear();
}

void Dialog::on_del_clicked()
{
    int row=ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(row);
}

void Dialog::on_tableWidget_itemSelectionChanged()
{
    int row=ui->tableWidget->currentRow();
    QString temp1,temp2;
    temp1 = ui->tableWidget->item(row,0)->text();
    temp2 = ui->tableWidget->item(row,1)->text();
    ui->lineEdit1->setText(temp1);
    ui->lineEdit2->setText(temp2);
}
