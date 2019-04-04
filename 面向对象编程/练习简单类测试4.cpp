// 构造如下类，在主函数中进行测试
// 成员数据：三个整数。
// 成员函数：构造函数、输入函数、输出最大数。


#include <iostream>
using namespace std;

class A
{
private:
    int a,b,c;
public:
    A()
    {
        a=0;
        b=0;
        c=0;
    }
    void input()
    {
        cout<<"input a:";cin>>a;
        cout<<"input b:";cin>>b;
        cout<<"input c:";cin>>c;
    }
    void output()
    {
        cout<<"max="<<max_in_three()<<endl;
    }
    int max_in_three()
    {
        int max;
        max = (a > b) ? a : b;
        max = (max > c) ? max : c;
        return max;
    }
};

int main()
{
    A a;
    a.input();
    a.output();
    return 0;
}
