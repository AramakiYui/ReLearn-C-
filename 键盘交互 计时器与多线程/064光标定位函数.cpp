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

int main()
{
    gotoxy(30,10);
	cout<<"Hello!"<<endl;
	return 0;
}
