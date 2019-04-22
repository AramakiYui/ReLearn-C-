#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_actionshow_triggered()
{
    ui->lineEdit->setText("你好!");
}

void MainWindow::on_actionclear_triggered()
{
    ui->lineEdit->clear();
}
