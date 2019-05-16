#include <iostream>
using namespace std;

int main()
{
    int a=1000;
    int b=2000;
    int& p=a;   //a的别名为p
    cout<<p<<endl;
    p=b;
    cout<<p<<endl;

    return 0;
}
