#include <windows.h>
#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;

class Move
{
private:
	int x,y,n;
	clock_t t;
	char c1,c2;
public:
	Move()
	{
		x=30;y=10;n=0;
		t=clock();
	}
	void gotoxy(int x,int y)
	{
		HANDLE h;//¾ä±úË÷Òý
		COORD c;//×ø±ê×ª»»
		c.X=x;
		c.Y=y;
		h=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(h,c);
	}
	void draw()//»­µã
	{
		gotoxy(x,y);
		cout<<n;
	}
	void clear()//ÇåÆÁ
	{
		gotoxy(x,y);
		cout<<"  ";
	}
	void timer()//¶¨Ê±Æ÷
	{
		if(clock()-t>100)
		{
			gotoxy(x,y);
			cout<<n;
			++n;
			t=clock();
		}
	}
	void key()
	{
		if(kbhit())
		{
			c1=getch();
			if(c1==27) exit(0);
			if(c1==-32)//¿ÕÊäÈë
			{
				c2=getch();
				clear();
				switch(c2)
				{
					case 75:x=x-1;break;//×óÒÆ
					case 77:x=x+1;break;//ÓÒÒÆ
				}
				draw();
			}
		}
	}
	void move()
	{
		while(true)
		{
			timer();
			key();
		}
	}
};

int main()
{
	Move m;
	m.move();
	return 0;
}
