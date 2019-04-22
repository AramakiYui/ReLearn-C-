#include "widget.h"
#include "ui_widget.h"
#include <QPainter>//paint
#include <QKeyEvent>//键盘响应
#include <QDebug>//计时器
#include <QTimerEvent>//计时器
const int tt=5;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    x=200;y=200;
    x1=100;y1=100;
    t1=this->startTimer(tt);//固定用法
}

Widget::~Widget()
{
    delete ui;
}

void Widget::draw()
{
    QPainter paint(this);
    QPen pen(QColor(255,255,255));//建立画笔
    QBrush brush(QColor(255,0,0));//建立画刷
    paint.setPen(pen);
    paint.setBrush(brush);//装载
    paint.drawEllipse(x,y,20,20);//(x,y)直径20
}

void Widget::draw1()
{
    QPainter paint(this);
    QPen pen(QColor(255,255,255));//建立画笔
    QBrush brush(QColor(255,0,0));//建立画刷
    paint.setPen(pen);
    paint.setBrush(brush);//装载
    for(int i=0;i<a.size();++i)
        paint.drawEllipse(a[i].x,a[i].y,20,20);
}

void Widget::paintEvent(QPaintEvent* ev)//paint
{
    draw();
    draw1();
}
void Widget::keyPressEvent(QKeyEvent* ev)//key
{
    switch(ev->key())
    {
    case Qt::Key_Right:x=x+5;if(x<1)x=1;break;
    case Qt::Key_Left:x=x-5;if(x>800)x=800;break;
    case Qt::Key_Space:
        A temp;
        temp.x = x;
        temp.y = y;
        a.push_back(temp);
        break;
    }
    update();
}
void Widget::timerEvent(QTimerEvent* ev)//timer
{
    if(ev->timerId() == t1)
    {
       for(int i=0;i<a.size();++i)
       {
            a[i].y=a[i].y-5;
            if(a[i].y<0) a.erase(a.begin()+i);
       }
    }
    update();
}
