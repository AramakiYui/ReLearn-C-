#include <windows.h>
#include <iostream>
using namespace std;

void gotoxy(int x,int y)
{
    HANDLE h;//��������������
    COORD c;//�ṹ�壬����ֵ
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

        _sleep(20);//�»��ߴ���ϵͳ����

        gotoxy(x,y);
        cout<<"  ";

        ++x;//���¶�λ����
        x=x%77;
    }
}
int main()
{
    move(0,10);
	return 0;
}
