//随机产生一个1～1000之间的整数，
//使用折半查找法找到该数，并且同时显示折半查找的次数。

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class A
{
private:
	int len,n;
public:
	A()
	{
		len=1000;
		n=0;
	}
	void output()
	{
		cout<<"Find the number "<<n<<" by "<<search()
			<<" times!"<<endl;
	}
	int search()
	{
		int min=0,max=1000,times=0;
		srand(time(NULL));
		n = rand()%len+1;
		while(min<=max)
		{
			int middle = (min+max)/2;
			++times;
			if(n==middle)
				break;
			else if(n>middle)
				min = middle + 1;
			else
				max = middle - 1;
		}
		return times;
	}
};

int main()
{
	A a;
	a.output();

	return 0;
}
