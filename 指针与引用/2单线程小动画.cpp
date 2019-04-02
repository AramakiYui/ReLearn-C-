#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;

class Move
{
private:
	int x,y;
public:
	Move(){x=30;y=10;}
	void gotoxy(int x,int y)
	{
		HANDLE h;//句柄,对象的索引
		COORD c;//结构体,坐标值
		c.X=x;
		c.Y=y;
		h=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(h,c);
	}
	void draw()
	{
		gotoxy(x,y);
		cout<<"O";
	}
	void clear()
	{
		gotoxy(x,y);
		cout<<"  ";
	}
	void move()
	{
		char c1,c2;
		draw();
		while(true)
		{
			c1=getch();
			if(c1==27) exit(0);
			if(c1==-32)
			{
				c2=getch();
				clear();
				switch(c2)
				{
					case 75:x=x-1;break;
					case 77:x=x+1;break;
				}
				draw();
			}
		}
	}
};

int main()
{
	Move m;
	m.move();
	return 0;
}
