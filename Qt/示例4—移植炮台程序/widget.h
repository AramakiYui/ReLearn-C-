#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QObject>//timer
#include <vector>
using namespace std;

struct A
{
    int x,y;
};

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;//负责绘图，键盘相应，计时器
    void draw();
    void draw1();
    int x,y;//炮台坐标
    int x1,y1;//炮弹坐标
    int t1;//计时器
    vector <A> a;
protected:
    void paintEvent(QPaintEvent* ev);//绘图
    virtual void keyPressEvent(QKeyEvent* ev);//键盘相应
    virtual void timerEvent(QTimerEvent* ev);//计时器
};

#endif // WIDGET_H
