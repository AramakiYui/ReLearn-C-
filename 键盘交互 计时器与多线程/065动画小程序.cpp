#include <windows.h>
#include <iostream>
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
    while(true)
    {
        gotoxy(x,y);
        cout<<"O";

        _sleep(20);//下划线代表系统函数

        gotoxy(x,y);
        cout<<"  ";

        ++x;//重新定位坐标
        x=x%77;
    }
}
int main()
{
    move(0,10);
	return 0;
}
