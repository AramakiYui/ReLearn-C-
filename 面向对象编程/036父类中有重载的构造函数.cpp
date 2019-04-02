#include <iostream>
using namespace std;

class A
{
protected:  //protected类型允许子类使用其数据
    int a;
public:
    A()
    {
        a=10;
    }
    A(int aa)
    {
        a=aa;
    }
    void output_A()
    {
        cout<<"a="<<a<<endl;
    }
};

class B:public A    //子类继承
{
private:
    int b;
public:
    B()
    {
        b=20;
    }
    B(int aa,int bb):A(aa)
    {
        b=bb;
    }
    void output_B()
    {
        cout<<"b="<<b<<endl;
    }
};

int main()
{
    B b;
    b.output_A();
    b.output_B();
    B b1(3,4);
    b1.output_A();
    b1.output_B();

    return 0;
}
