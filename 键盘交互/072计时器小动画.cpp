#include <windows.h>
#include <iostream>
#include <ctime>
#include <conio.h>
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
    clock_t t;
    bool flag = true;//С�����������ı�־
    t = clock();
    while(!kbhit())
    {
        if(flag==true)//���»���С��
        {
            gotoxy(x,y);
            cout<<"��";
            flag = false;
        }

        if(clock()-t>20)
        {
            gotoxy(x,y);
            cout<<"  ";

            ++x;//���¶�λ����
            if(x>77)x=0;//x=x%78;
            t = clock();//Ϊ��ʱ���������¸�ֵ
            flag = true;
        }
    }
}

int main()
{
    move(0,10);
	return 0;

}
