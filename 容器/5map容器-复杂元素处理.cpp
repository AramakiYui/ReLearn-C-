#include <iostream>
#include <map>
#include <ctime>
#include <cstdlib>
using namespace std;
const int n=10000;

struct A
{
	int m1;
	int m2;
};

class Map
{
private:
    A temp;
	map<int,A>a;
	map<int,A>::iterator p;
public:
	Map()
	{
		srand(time(NULL));
		for(int i=1;i<=n;++i)
		{
			temp.m1=rand()%n;
			temp.m2=rand()%n;
			a.insert(pair<int,A>(i,temp));
		}
	}
	void browse()
	{
		for(p=a.begin();p!=a.end();++p)
		{
			cout<<p->first<<"-"<<(p->second).m1<<"-"<<(p->second).m2<<endl;
		}
	}
	void find_m()
	{
		//clock_t t1,t2;
		//t1=clock();
		for(int i=0;i<n;++i)
		{
			p=a.find(5000);
		}
		if(p!=a.end())
			cout<<(p->second).m1<<"-"<<(p->second).m2<<endl;
		//t2=clock();
		//cout<<"time:"<<t2-t1<<endl;
	}
};

int main()
{
	Map m;
	m.browse();
	m.find_m();
    return 0;
}
