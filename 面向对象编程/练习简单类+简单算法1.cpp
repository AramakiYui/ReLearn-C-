//��������10�������ֱ�Ϊ0��10��20�� ������90��
//�Ӽ�������һ��1��100֮������������������ҳ�һ��
//�������ֵ��С��Ԫ�ز��������������Ԫ��ͬʱ����Ҫ���������֮һ���ɡ�


#include <iostream>
using namespace std;

class A
{
private:
	int n;
public:
	A()
	{
		n=0;
	}
	void input()
	{
		cout<<"input n:";
		cin>>n;
	}
	void output()
	{
		cout<<"the answer:"<<fun()<<endl;
	}
	int fun()
	{
		int a[10] = {0,10,20,30,40,50,60,70,80,90};
		int i,j,min=100;
		for(i=0;i<10;++i)
		{
			if(jueduizhi(a[i])<=min)
			{
				min=jueduizhi(a[i]);
				j=i;
			}
		}
		return a[j];
	}
	int jueduizhi(int num)
	{
		if(num>n)
			return num-n;
		else
			return n-num;
	}
};

int main()
{
	A a;
	a.input();
	a.output();

	return 0;
}
