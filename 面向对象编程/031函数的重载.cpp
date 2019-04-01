#include <iostream>
using namespace std;

int add(int n1,int n2)
{
    return n1+n2;
}

double add(double n1,double n2)
{
    return n1+n2;
}

int add(int n1,int n2,int n3)
{
    return n1+n2+n3;
}

int main()
{
    cout<<"a+b="<<add(1,2)<<endl;
    cout<<"a+b="<<add(1.5,2.3)<<endl;
    cout<<"a+b+c="<<add(1,2,3)<<endl;
    
    return 0;
}
