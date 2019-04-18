#include <iostream>
using namespace std;

template <class T>//模板语句
class A
{
private:
    T a1,a2;
public:
    A(T aa1,T aa2)
    {
        a1=aa1;
        a2=aa2;
    }
    T add()
    {
        T sum;
        sum=a1+a2;
        return sum;
    }
};

int main()
{
    A <int> a(1,2);//注意：多了"<int>"一节，是类型实参,前后空格
    A <double> b(1.5,2.3);
    cout<<a.add()<<endl;
    cout<<b.add()<<endl;
    return 0;
}
