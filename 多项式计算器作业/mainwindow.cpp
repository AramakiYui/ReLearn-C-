#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog1.h"
#include "dialog2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton1_clicked()
{
    if(d1.exec() == QDialog::Accepted)
    {
        d1.p1.x = x;
        n1 = d1.p1.n;
        QString s1;
        s1 = QString::fromStdString(d1.p1.display());
        ui->labeledit1->setText(s1);
    }
}

void MainWindow::on_pushButton2_clicked()
{
    if(d2.exec() == QDialog::Accepted)
    {
        d2.p2.x = x;
        n2 = d2.p2.n;
        QString s2;
        s2 = QString::fromStdString(d2.p2.display());
        ui->labeledit2->setText(s2);
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString s,s1,s2;
    s = ui->lineEdit->text();
    x = s.toInt();
    s1 = "x = ";
    s2 = s1.append(s);
    ui->label_7->setText(s2);
}

void MainWindow::on_pushButton3_clicked()
{
    Polynomial p3 = d1.p1 + d2.p2;
    QString s3;
    s3 = QString::fromStdString(p3.display());
    ui->labeledit3->setText(s3);
    QString s4;
    s4 = QString::fromStdString(p3.answer());
    ui->labeledit4->setText(s4);
}

void MainWindow::on_pushButton4_clicked()
{
    Polynomial p4 = d1.p1 - d2.p2;
    QString s3;
    s3 = QString::fromStdString(p4.display());
    ui->labeledit3->setText(s3);
    QString s4;
    s4 = QString::fromStdString(p4.answer());
    ui->labeledit4->setText(s4);
}

void MainWindow::on_pushButton5_clicked()
{
    Polynomial p5 = d1.p1 * d2.p2;
    QString s3;
    s3 = QString::fromStdString(p5.display());
    ui->labeledit3->setText(s3);
    QString s4;
    s4 = QString::fromStdString(p5.answer());
    ui->labeledit4->setText(s4);
}
