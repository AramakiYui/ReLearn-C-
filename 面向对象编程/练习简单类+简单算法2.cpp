//��������:Ҫ������Ļ�Ϲ̶�λ�ã���˳��
//ѭ�����200����200����400������400��֮������֣�
//��200��ʼ���ٶȿ����ڿ��Կ������ֵı仯���������������

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
