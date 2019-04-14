#include <iostream>
#include <vector>
using namespace std;

void add(vector <int>& b,int m)//使用引用返回容器
{
    int i;
    for(i=0;i<b.size();++i)
        b[i]=b[i]+m;
}
int main()
{
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    add(a,100);
    int i;
    for(i=0;i<a.size();++i)
        cout<<a[i]<<endl;

    return 0;
}
