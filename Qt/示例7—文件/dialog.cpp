#include "dialog.h"
#include "ui_dialog.h"
#include <string>
#include <fstream>
using namespace std;

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

void Dialog::on_pushButton1_clicked()
{
    string s;
    ifstream f("001.txt",ios::in);
    if(!f)
        ui->lineEdit1->setText("读取文件错误!");
    else {
        while(true)
        {
            getline(f,s);
            ui->listWidget->addItem(QString::fromLocal8Bit(s.data()));//字符串转换为qt字符串
            if(f.eof())break;
        }
    }
    f.close();
}

QString word1(QString s)
{
    QString temp;
    int n=s.indexOf(" ");
    temp = s.mid(0,n);//取子串
    return temp;
}
void Dialog::on_pushButton2_clicked()
{
    QString word,temp;
    word = ui->lineEdit1->text();
    int n = ui->listWidget->count();
    int i;
    for(i=0;i<n;++i)
    {
        temp=ui->listWidget->item(i)->text();
        if(word == word1(temp))
        {
            ui->lineEdit2->setText(temp);
            ui->listWidget->setCurrentRow(i);
            break;
        }
    }
    if(i==n)
        ui->lineEdit2->setText("no word!");
}
