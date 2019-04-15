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
    bool flag1,flag2;//初始状态，边界标识
    char c1,c2;//接受的键盘码;
public:
    game(int x0,int y0,int tt0)
    {
        x=x0;y=y0;
        tt=tt0;
        flag1=true;//小球初始化
        flag2=true;//小球未到边界
        t=clock();
    }

    void draw()
    {
        gotoxy(x,y);
        cout<<"●";
    }

    void del()
    {
        gotoxy(x,y);
        cout<<"  ";
    }

    void background()
    {
        cout<<"┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┃                                  ┃"<<endl;
        cout<<"┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛"<<endl;
    }

    void key()//接收键盘码的线程
    {
        if(kbhit())
        {
            c1 = getch();
            if(c1==27)exit(0);
            if(c1==-32)
            {
                c2=getch();
                flag2=false;//可能离开边界
            }
        }
    }

    void move()
    {
        if(flag1==true)//重新绘制小球
        {
            draw();
            flag1 = false;
        }

        if(clock()-t>tt && flag2==false)
        {
            del();
            switch(c2)
            {
            case 72:
                --y;
                if(y<1)
                {
                    y=1;
                    flag2=true;
                }
                break;
            case 80:
                ++y;
                if(y>14)
                {
                    y=14;
                    flag2=true;
                }
                break;
            case 77:
                x=x+2;
                if(x>33)
                {
                    x=33;
                    flag2=true;
                }
                break;
            case 75:
                x=x-2;
                if(x<2)
                {
                    x=2;
                    flag2=true;
                }
                break;
            }
            flag1 = true;
            t = clock();//为计时器变量重新赋值
        }
    }
};
int main()
{
    hide_cursor();
    game g(10,10,150);
    g.background();
    while(true)
    {
        g.key();
        g.move();
	}
	show_cursor();
	return 0;

}
