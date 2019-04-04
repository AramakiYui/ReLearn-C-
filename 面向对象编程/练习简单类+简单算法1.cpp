//数组中有10个数，分别为0、10、20、 ……、90，
//从键盘输入一个1～100之间的整数，从数组中找出一个
//与该数差值最小的元素并且输出。若两个元素同时满足要求，输出其中之一即可。


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
