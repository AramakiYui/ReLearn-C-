#include <iostream>
using namespace std;

template <class T1, class T2>//模板语句
class A
{
private:
    T1 a1;
    T2 a2;
public:
    A(T1 aa1,T2 aa2)
    {
        a1=aa1;
        a2=aa2;
    }
    T1 add()
    {
        T1 sum;
        sum=a1+a2;
        return sum;
    }
};

int main()
{
    A <double,int> a(1.5,2);//<int,double> --> <T1,T2>
    cout<<a.add()<<endl;
    return 0;
}
