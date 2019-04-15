#include <windows.h>
#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

void gotoxy(int x,int y)
{
    HANDLE h;//句柄，对象的索引
    COORD c;//结构体，坐标值
    c.X=x;
    c.Y=y;
    h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,c);
}

void move(int x0,int y0)
{
    int x=x0;
    int y=y0;
    clock_t t;
    bool flag = true;//小球绘制与擦除的标志
    t = clock();
    while(!kbhit())
    {
        if(flag==true)//重新绘制小球
        {
            gotoxy(x,y);
            cout<<"●";
            flag = false;
        }

        if(clock()-t>20)
        {
            gotoxy(x,y);
            cout<<"  ";

            ++x;//重新定位坐标
            if(x>77)x=0;//x=x%78;
            t = clock();//为计时器变量重新赋值
            flag = true;
        }
    }
}

int main()
{
    move(0,10);
	return 0;

}
