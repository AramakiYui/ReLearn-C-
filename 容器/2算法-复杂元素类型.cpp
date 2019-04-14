#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

struct student
{
	int number;
	int score;
};

class Score
{
private:
	vector<student>a;
	vector<student>::iterator p;
public:
	Score()
	{
		student temp;
		int i;
		srand(time(NULL));
		for(i=0;i<10;++i)
		{
			temp.number=i+1;
			temp.score=rand()%100+1;
			a.push_back(temp);
		}
	}
	static bool sort1(student s1,student s2)
	{
		return s1.score>s2.score;
	}
	void browse()
	{
		for(p=a.begin();p!=a.end();++p)
		{
			cout<<p->number<<"-"<<p->score<<endl;
		}
	}
	void max_min()
	{
		sort(a.begin(),a.end(),sort1);
		p=a.begin();
		cout<<"max:"<<p->number<<"-"<<p->score<<endl;
		p=a.end()-1;
		cout<<"min:"<<p->number<<"-"<<p->score<<endl;
	}
};

int main()
{
	Score s;
	s.browse();
	s.max_min();
	return 0;
}

