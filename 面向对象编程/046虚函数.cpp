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
    virtual void output()
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
    virtual void output()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

int main()
{
    A *p;
    A a(5);
    B b(3,4);
    p = &b;
    p->output();

    return 0;
}
