#include <iostream>
using namespace std;

void swap(int& x,int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a=1000;
    int b=2000;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}
