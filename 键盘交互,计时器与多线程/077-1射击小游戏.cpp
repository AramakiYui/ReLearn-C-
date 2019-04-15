#include <windows.h>
#include <iostream>
#include <ctime>
#include <conio.h>
#include <vector>
#include "basic.cpp"
using namespace std;

class game
{
private:
    int x,y;
	clock_t t1,t2;//计时器
	int tt1,tt2;//时间间隔
	bool flag;//初始化炮台标志
	vector <COORD> a;//炮弹容器,COORD是坐标的结构体
public:
	game(int x0,int y0,int tt10,int tt20)//炮台初始位置，两个时间间隔
	{
	    x=x0;y=y0;
	    tt1=tt10;
	    tt2=tt20;
	    t1=clock();
	    t2=clock();
	    flag=true;//初始化炮台标志
	}

	void draw()
	{
		gotoxy(x,y);
		cout<<"AA";
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
                COORD temp;
                temp.X = x;
                temp.Y = y-1;
                a.push_back(temp);
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
    void paodan()//炮弹线程
    {
        if(clock()-t2>tt2)
        {
            for(int i=0;i<a.size();++i)
            {
                gotoxy(a[i].X,a[i].Y);
                cout<<"  ";
                if(a[i].Y>0)
                {
                    --a[i].Y;
                    gotoxy(a[i].X,a[i].Y);
                    cout<<"●";
                }
                else
                    a.erase(a.begin()+i);//删除元素，括号中为地址
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
        g.paodan();
    }
    show_cursor();
	return 0;
}
