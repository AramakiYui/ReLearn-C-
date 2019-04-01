#include <iostream>
#include <ctime>
#include <conio.h>//kbhit()
using namespace std;

class Screen
{
private:
	int n;
public:	
	Screen(){n=10;}
	Screen(int nn){n=nn;}
	void move1()
	{
		for(int i=0;i<=10;++i)
			cout<<i;
	}
	void move2()
	{
		for(char c='a';c<'z';++c)
			cout<<c;
	}
	void screen()
	{
		int t;
		while(true)
		{
			t=time(NULL)%(n*2);
			if(t<n)
				move1();
			else if(t>=n&&t<(n*2))
				move2();
			if(kbhit())	//如果键盘有输入
				break;
		}
	}
};
int main()
{
	Screen s(15);
	s.screen();
	return 0;
}
