#include <windows.h>
#include <iostream>
#include <ctime>
#include <conio.h>
#include <vector>
#include "basic.cpp"
using namespace std;

struct gun
{
    int x,y;
    int live;
};

class game
{
private:
    int x,y;
	clock_t t1,t2;//计时器
	int tt1,tt2;//时间间隔
	bool flag;//初始化小球标志
	vector <gun> a;//例子容器
public:
	game(int x0,int y0,int tt10,int tt20)//小球初始位置，时间间隔
	{
        srand(time(NULL));
	    x=x0;y=y0;
	    tt1=tt10;
	    tt2=tt20;
	    t1=clock();
	    t2=clock();
	    flag=true;//初始化小球标志
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

    void move()//炮台线程
    {
        if(flag==true)//重新绘制炮台
        {
            draw();
            flag = false;
        }

        if(clock()-t1>tt1)
        {
            if(GetAsyncKeyState(VK_ESCAPE))exit(0);
            if(GetAsyncKeyState(VK_SPACE))
            {
                gun temp;
                for(int i=0;i<100;++i)
                {
                    switch(i%4)
                    {
                    case 0:
                        temp.x = x - rand()%6;
                        temp.y = y - rand()%3;
                        break;
                    case 1:
                        temp.x = x + rand()%6;
                        temp.y = y - rand()%3;
                        break;
                    case 2:
                        temp.x = x - rand()%6;
                        temp.y = y + rand()%3;
                        break;
                    case 3:
                        temp.x = x + rand()%6;
                        temp.y = y + rand()%3;
                        break;
                    }
                    temp.live = rand()%2;
                    a.push_back(temp);
                }
            }
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
                if(y>40)
                    y=40;
                draw();
            }
            if(GetAsyncKeyState(VK_RIGHT))
            {
                del();
                ++x;
                draw();
            }
            if(GetAsyncKeyState(VK_LEFT))
            {
                del();
                --x;
                if(x<1)
                    x=1;
                draw();
            }
            flag = true;
            t1 = clock();//为计时器变量重新赋值
        }
    }
    void lizi()//粒子线程
    {
        if(clock()-t2>tt2)
        {
            for(int i=0;i<a.size();++i)
            {
                gotoxy(a[i].x,a[i].y);
                cout<<"  ";
                if(a[i].live>0)
                {
                    --a[i].live;
                    gotoxy(a[i].x,a[i].y);
                    cout<<"●";
                }
                else
                    a.erase(a.begin()+i);
            }
            t2=clock();//重新计时
        }
    }
};

int main()
{
	game g(40,20,50,15);
	hide_cursor();
	while(true)
    {
        g.move();
        g.lizi();
    }
    show_cursor();
	return 0;
}
