#include <iostream>
using namespace std;

//int add(int a,int b)
//{
//    int sum;
//    sum=a+b;
//    return sum;
//}

//double add(double a,double b)
//{
//    double sum;
//    sum=a+b;
//    return sum;
//}

template <class T>//模板语句
T add(T a1,T a2)
{
    T sum;
    sum=a1+a2;
    return sum;
}

int main()
{
    cout<<"1+2="<<add(1,2)<<endl;
    cout<<"1.5+2.3="<<add(1.5,2.3)<<endl;
    return 0;
}
