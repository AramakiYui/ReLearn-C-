#include <iostream>
using namespace std;

void add(int a[],int n,int m)//数组作形参
{
    for(int i=0;i<n;++i)
        a[i] = a[i] + m;
}

int main()
{
    int a[3]={1,2,3};
    add(a,3,100);//数组实参，“a“传的是数组地址
    for(int i=0;i<3;++i)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
