#include <iostream>
#include <vector>
#include <algorithm>//算法头文件
#include <numeric>//accumulate()函数需要，求和用

using namespace std;

void output(vector <int> b)
{
    for(int i=0;i<b.size();++i)
        cout<<b[i]<<endl;
    cout<<endl;
}

bool sort1(int n1,int n2)
{
    return n1>n2;
}

int main()
{
    vector <int> a;
    a.push_back(2);
    a.push_back(5);
    a.push_back(4);
    a.push_back(3);
    a.push_back(1);
    output(a);

    //sort(a.begin(),a.end());//从小到大排序
	sort(a.begin(),a.end(),sort1);//加参数sort1从大到小排序
    output(a);

    cout<<"max="<<*max_element(a.begin(),a.end())<<endl;//输出最大元素
    cout<<"min="<<*min_element(a.begin(),a.end())<<endl;//输出最小元素
    cout<<"sum="<<accumulate(a.begin(),a.end(),0)<<endl;//输出元素数值之和
	return 0;
}
