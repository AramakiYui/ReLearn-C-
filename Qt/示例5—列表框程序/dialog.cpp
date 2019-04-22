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
    QString temp;
    temp = ui->lineEdit->text();
    ui->listWidget->addItem(temp);
    ui->lineEdit->clear();
}

void Dialog::on_edit_clicked()
{
    QString temp;
    temp = ui->lineEdit->text();
    int row = ui->listWidget->currentRow();
    ui->listWidget->item(row)->setText(temp);
    ui->lineEdit->clear();
}

void Dialog::on_del_clicked()
{
    int row=ui->listWidget->currentRow();
    ui->listWidget->takeItem(row);
}

void Dialog::on_listWidget_itemSelectionChanged()
{
    QString temp;
    int row=ui->listWidget->currentRow();
    temp=ui->listWidget->item(row)->text();
    ui->lineEdit->setText(temp);
}
