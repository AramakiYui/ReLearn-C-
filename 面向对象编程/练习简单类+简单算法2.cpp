//屏保程序:要求在屏幕上固定位置（按顺序）
//循环输出200（含200）～400（不含400）之间的数字，
//从200开始，速度控制在可以看清数字的变化，按任意键结束。

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
using namespace std;

class A
{
private:
	int x,y;
public:
	A(int xx,int yy)
	{
		x=xx;
		y=yy;
	}
	void output()
	{
		int i=200,j;
		while(!kbhit())
		{
		    system("cls");
			if(i>=400)
				i=200;
			for(j=0;j<x;++j)
				cout<<endl;
			for(j=0;j<y;++j)
				cout<<" ";
			cout<<i;
			++i;
		}

	}
};

int main()
{
	A a(10,100);
	a.output();

	return 0;
}
