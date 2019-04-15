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
    bool flag;//初始状态，边界标识
    char c1,c2;//接受的键盘码;
public:
    game(int x0,int y0,int t0)
    {
        x=x0;y=y0;
        tt=t0;
        flag=true;//小球初始化
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

    void move()
    {
        if(flag==true)//重新绘制小球
        {
            draw();
            flag = false;
        }

        if(clock()-t>tt)
        {
            if(GetAsyncKeyState(VK_ESCAPE))exit(0);
            if(GetAsyncKeyState(VK_UP))
            {
                del();
                --y;
                if(y<1)
                    y=1;
                draw();
            }
            if(GetAsyncKeyState(VK_DOWN))
            {
                del();
                ++y;
                if(y>14)
                    y=14;
                draw();
            }
            if(GetAsyncKeyState(VK_RIGHT))
            {
                del();
                x=x+2;
                if(x>33)
                    x=33;
                draw();
            }
            if(GetAsyncKeyState(VK_LEFT))
            {
                del();
                x=x-2;
                if(x<2)
                    x=2;
                draw();
            }
            //flag = true;
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
        g.move();
	}
	show_cursor();
	return 0;

}
