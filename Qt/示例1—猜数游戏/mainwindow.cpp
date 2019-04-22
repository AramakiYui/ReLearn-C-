#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>
#include <cstdlib>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    n = rand()%1000+1;
    s.sprintf("%d",n);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString ss;
    ss = ui->lineEdit->text();
    if(ss==s)
        ui->label->setText("猜对了!");
    else if(ss>s)
        ui->label->setText("大了!");
    else if(ss<s)
        ui->label->setText("小了!");
}
