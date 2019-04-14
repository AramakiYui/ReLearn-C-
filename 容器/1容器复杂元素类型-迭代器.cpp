#include <iostream>
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
	vector<student>::iterator p;//µü´úÆ÷
public:
	Score()
	{
		student temp;
		int i;
		for(i=0;i<10;++i)
		{
			temp.number=i+1;
			temp.score=i+1;
			a.push_back(temp);
		}
	}
	void browse()
	{
		for(p=a.begin();p!=a.end();++p)
		{
			cout<<p->number<<"-"<<p->score<<endl;
		}
	}
};

int main()
{
	Score s;
	s.browse();
	return 0;
}
