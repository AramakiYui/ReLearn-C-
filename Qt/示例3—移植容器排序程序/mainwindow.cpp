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

Sort_v::Sort_v(int nn)
{
    n = nn;
    srand(time(NULL));
    for(int i=0;i<n;++i)
        a.push_back(rand()%n);
}
int Sort_v::sort_v()
{
    clock_t t1,t2;
    t1=clock();
    sort(a.begin(),a.end());
    t2=clock();
    return t2-t1;
}

void MainWindow::on_pushButton_clicked()
{
    QString s;
    s=ui->lineEdit1->text();//输入s
    int nn=s.toInt();//字符串转换为int
    Sort_v sort1(nn);
    QString t;
    t.sprintf("%d",sort1.sort_v());//转换为字符串
    ui->lineEdit2->setText(t);
}
