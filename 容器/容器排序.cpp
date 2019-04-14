#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;
const int n=10000;

bool sort1(int n1,int n2)
{
	return n1>n2;
}

int main()
{
    vector <int> a;
	int i,j,k,temp;
	clock_t t1,t2;//计时类
	for(i=0;i<n;++i)
		a.push_back(i);

	t1=clock();
	sort(a.begin(),a.end(),sort1);//加参数sort1从大到小排序
	t2=clock();
	cout<<t2-t1<<endl;
	for(i=0;i<10;++i)
		cout<<a[i]<<endl;
	return 0;
}
