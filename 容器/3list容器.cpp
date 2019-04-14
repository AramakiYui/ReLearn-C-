#include <iostream>
#include <string>
#include <list>
using namespace std;

struct Note
{
	string name;
	string phone;
};

class List
{
private:
	list <Note> a;
	list <Note>::iterator p;
public:
	List()
	{
		Note temp;
		temp.name="001";temp.phone="001";
		a.push_back(temp);
		temp.name="002";temp.phone="002";
		a.push_back(temp);
	}
	void browse()
	{
		for(p=a.begin();p!=a.end();++p)
		{
			cout<<p->name<<"-"<<p->phone<<endl;
		}
		cout<<endl;
	}
	void insert_item()
	{
		Note temp;
		temp.name="003";temp.phone="003";
		p=a.begin();
		a.insert(++p,temp);//插入新的信息
	}
};

int main()
{
	List l;
	l.browse();
	l.insert_item();
	l.browse();
	return 0;
}
