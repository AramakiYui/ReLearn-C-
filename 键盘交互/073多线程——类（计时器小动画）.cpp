#include <windows.h>
#include <iostream>
#include <ctime>
#include <conio.h>
#include "basic.cpp"
using namespace std;

class game
{
private:
    int x,y;
    clock_t t,tt;
    bool flag;
public:
    game(int x0,int y0,int tt0)
    {
        x=x0;y=y0;
        tt=tt0;
        flag=true;
        t=clock();
    }

    void move()
    {
        if(flag==true)//���»���С��
        {
            gotoxy(x,y);
            cout<<"��";
            flag = false;
        }

        if(clock()-t>tt)
        {
            gotoxy(x,y);
            cout<<"  ";

            ++x;//���¶�λ����
            if(x>77)x=0;//x=x%78;
            t = clock();//Ϊ��ʱ���������¸�ֵ
            flag = true;
        }
    }
};
int main()
{
    game g1(0,10,10),g2(0,20,20);
    hide_cursor();
    while(!kbhit())
    {
        g1.move();
        g2.move();
	}
	show_cursor();
	return 0;

}
