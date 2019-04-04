//屏幕为文本方式（40x40），原点位于屏幕左上角，
//在屏幕上随机产生十个点并且显示出来（用“☆”）。
//找出离原点最近的一个点，显示为“★”。

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

class A
{
private:
	int row[10];
	int column[10];
	int distance[10];
public:
	A()
	{
	    srand(time(NULL));
		initrow();
		initcolumn();
		initdistance();
	}
	void output()
	{
		system("cls");
		int i,j,k,r,c,min_dis=distance[0];
		for(i=0;i<10;++i)
		{
			if(distance[i]<=min_dis)
			{
				min_dis=distance[i];
				r=row[i];
				c=column[i];
			}
		}
		for(i=1;i<=30;++i)
		{
			for(j=1;j<=30;++j)
            {
				for(k=0;k<10;++k)
				{
					if(row[k]==i && column[k]==j)
                    {
                        if(row[k]==r && column[k]==c)
							cout<<"★";
						else
							cout<<"☆";
                    }
				}
				cout<<" ";
            }
			cout<<endl;
		}
	}

	void initrow()
	{
		int i;
		for(i=0;i<10;++i)
			row[i] = rand()%30+1;
	}
	void initcolumn()
	{
		int i;
		for(i=0;i<10;++i)
			column[i] = rand()%30+1;
	}
	void initdistance()
	{
		int i;
		for(i=0;i<10;++i)
			distance[i] = square(row[i]) + square(column[i]);
	}
	int square(int number)
	{
		return number*number;
	}
};

int main()
{
	A a;
	a.output();

	return 0;
}
