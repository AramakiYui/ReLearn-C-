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
    char c1,c2;//���ܵļ�����;
public:
    game(int x0,int y0,int tt0)
    {
        x=x0;y=y0;
        tt=tt0;
        flag=true;
        t=clock();
    }

    void key()//���ռ�������߳�
    {
        if(kbhit())
        {
            c1 = getch();
            if(c1==27)exit(0);
            if(c1==-32)
            {
                c2=getch();
            }
        }
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

            switch(c2)
            {
            case 77:
                ++x;
                if(x>77)x=0;
                break;
            case 75:
                --x;
                if(x<0)x=78;
                break;
            }
            flag = true;
            t = clock();//Ϊ��ʱ���������¸�ֵ
        }
    }
};
int main()
{
    hide_cursor();
    game g(0,10,10);
    while(true)
    {
        g.key();
        g.move();
	}
	show_cursor();
	return 0;

}
