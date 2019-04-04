// 3、构造如下类，在主函数中进行测试
// 成员数据：二个整数。
// 成员函数：构造函数、输入函数、输出两个数之差的绝对值。


#include <iostream>
using namespace std;

class A
{
private:
    int a,b;
public:
    A()
    {
        a=0;
        b=0;
    }
    void input()
    {
        cout<<"input a:";cin>>a;
        cout<<"input b:";cin>>b;
    }
    void output()
    {
        cout<<"|"<<a<<"-"<<b<<"|="<<jueduizhi()<<endl;
    }
    int jueduizhi()
    {
        if(a>b)
            return a-b;
        else
            return b-a;
    }
};

int main()
{
    A a;
    a.input();
    a.output();
    return 0;
}
