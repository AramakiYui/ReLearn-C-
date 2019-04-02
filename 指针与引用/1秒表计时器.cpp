#include <windows.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;

class Timer
{
private:
	int n;
public:
	Timer(){n=0;}
	void gotoxy(int x,int y)
	{
		HANDLE h;//句柄,对象的索引
		COORD c;//结构体,坐标值
		c.X=x;
		c.Y=y;
		h=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(h,c);
	}
	void timer()
	{
		time_t t;
		t=time(NULL);
		while(true)
		{
			if(kbhit())break;
			if(time(0)-t>=1)
			{
				gotoxy(30,10);
//				system("cls");
				cout<<n;
				++n;
				t=time(0);
			}
		}
	}
};

int main()
{
	Timer t;
	t.timer();
	return 0;
}
