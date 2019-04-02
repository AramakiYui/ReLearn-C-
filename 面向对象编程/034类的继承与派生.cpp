#include <iostream>
using namespace std;

class A
{
protected:  //protected类型允许子类使用其数据
    int a;
public:
    void input_A()
    {
        cout<<"input a:";
        cin>>a;
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
    void input_B()
    {
        cout<<"input b:";
        cin>>b;
    }
    void output_B()
    {
        cout<<"b="<<b<<endl;
    }
};

int main()
{
    B b;
    b.input_A();
    b.input_B();
    b.output_A();
    b.output_B();

    return 0;
}
