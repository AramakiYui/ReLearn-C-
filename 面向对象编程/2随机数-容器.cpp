//题目：抽奖程序，抽取三名获奖人员。
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> a,b;
//	vector<string>::iterator p;//迭代器 
	a.push_back("111");
	a.push_back("222");
	a.push_back("333");
	a.push_back("444");
	a.push_back("555");
	a.push_back("666");
	a.push_back("777");
	a.push_back("888");
	int i,m;
	srand(time(NULL));
	b=a;//a中保存原始数据 
//	p=b.begin();
	for(i=0;i<3;++i)
	{
		m=rand()%b.size();
		cout<<b[m]<<endl;		//cout<<*(p+m)<<endl;
		b.erase(b.begin()+m);	//b.erase(p+m);
	}
	system("pause");
	return 0;
}
