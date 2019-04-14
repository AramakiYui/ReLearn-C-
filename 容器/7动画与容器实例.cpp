#include <windows.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <conio.h>
using namespace std;

struct A
{
	int x,y;
};

class Game
{
private:
	vector <A> a;
	int x0,y0;
	clock_t t1,t2;
public:
	Game()
	{
		x0=rand()%80;
		y0=rand()%25;
		t1=clock();
		t2=clock();
		srand(time(NULL));
	}
	void gotoxy(int x,int y)
	{
		HANDLE h;//�������
		COORD c;//����ת��
		c.X=x;
		c.Y=y;
		h=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(h,c);
	}
	void draw(int x,int y)
	{
		gotoxy(x,y);
		cout<<"O";
	}
	void clear(int x,int y)
	{
		gotoxy(x,y);
		cout<<"  ";
	}

	void push()//����һ���µĵ�
	{
		if(clock()-t1>50)
		{
			A temp;
			temp.x=rand()%80;temp.y=rand()%25;
			a.push_back(temp);
			t1=clock();
		}
	}
	void shot()//ȫ�������ƶ�һλ
	{
		if(clock()-t2>60)//���������ٶ�
		{
			for(int i=0;i<a.size();++i)
			{
				clear(a[i].x,a[i].y);
				--a[i].y;
				if(a[i].y<0)//���Ƶ�����ɾ��
					a.erase(a.begin()+i);
				draw(a[i].x,a[i].y);
			}
			t2=clock();
		}
	}
	void move()
	{
		while(true)
		{
			push();
			shot();
			if(kbhit())break;
		}
	}
};

int main()
{
	Game g;
	g.move();
	return 0;
}
