#include <iostream>
#include <map>
#include <ctime>
#include <cstdlib>
using namespace std;
const int n=10000;

class Temp
{
private:
	map<int,int>a;
	map<int,int>::iterator p;
public:
	Temp()
	{
		srand(time(NULL));
		for(int i=1;i<=n;++i)
			a.insert(pair<int,int>(i,rand()%n+1));
	}
	void browse()
	{
		for(p=a.begin();p!=a.end();++p)
			cout<<p->first<<"-"<<p->second<<endl;
	}
	void find_m()
	{
		p=a.find(5001);
		if(p!=a.end())
			cout<<p->second<<endl;
		else
			cout<<"no number!"<<endl;
	}
};
int main()
{
	Temp t;
	t.browse();
	t.find_m();
	return 0;
}
