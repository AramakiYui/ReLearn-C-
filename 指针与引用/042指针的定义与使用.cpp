#include <iostream>
using namespace std;

int main()
{
    int a=1000;
    int b=2000;
    int* p;
    p=&a;
    cout<<*p<<endl;
    cout<<p<<endl;
    p=&b;
    cout<<*p<<endl;
    cout<<p<<endl;

    return 0;
}
