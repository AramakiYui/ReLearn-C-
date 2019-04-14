#include <windows.h>
#include <conio.h>
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

void hide_cursor()
{
    HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor_info;
    GetConsoleCursorInfo(h_GAME,&cursor_info);
    cursor_info.bVisible = false;       //����ʾ���
    SetConsoleCursorInfo(h_GAME,&cursor_info);
}

void show_cursor()
{
    HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor_info;
    GetConsoleCursorInfo(h_GAME,&cursor_info);
    cursor_info.bVisible = true;       //��ʾ���
    SetConsoleCursorInfo(h_GAME,&cursor_info);
}

void draw(int x,int y)
{
    gotoxy(x,y);
    cout<<"O";
}

void del(int x,int y)
{
    gotoxy(x,y);
    cout<<"  ";
}

void move(int x0,int y0)
{
    char c1,c2;
    int x=x0,y=y0;
    while(true)
    {
        draw(x,y);
        c1=getch();
        if(c1==27)break;//ESQ
        if(c1==-32)//���Ƽ�
        {
            del(x,y);
            c2=getch();//���Ƽ��ĵڶ���
            switch(c2)
            {
                case 72:--y;break;//up
                case 80:++y;break;//down
                case 75:--x;break;//left
                case 77:++x;break;//right
            }
        }
    }
}

int main()
{
    hide_cursor();
    move(10,10);
    show_cursor();
	return 0;
}
