#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Password
{
private:
	string s;//password
	int n;//times
public:
	Password(string ss,int nn){s=ss;n=nn;}
	void password()
	{
		string temp;
		char c;
		int i;
		for(i=0;i<n;++i)
		{
			cout<<"password:";
			while(true)
			{
				c=getch();
				if(c==13)break;	//13为回车
				else
				{
					temp=temp+c;
					cout<<"*";
				}
			}
			if(temp==s)
			{
				cout<<endl<<"right!"<<endl;break;
			} 
			else
				cout<<endl<<"wrong!repeat..."<<endl;
		}
		if(i==n) cout<<endl<<"you dead!"<<endl;
	}
};
int main()
{
	Password p("123456",3);
	p.password();
	return 0;
}
