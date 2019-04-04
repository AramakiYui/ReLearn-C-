// 2、构造如下类，在主函数中进行测试
// 成员数据：一个整数。
// 成员函数：构造函数、输入函数、输出阶乘的函数。


#include <iostream>
using namespace std;

class A
{
private:
    int n;
public:
    A()
    {
        n=0;
    }
    void input()
    {
        cout<<"input n:";cin>>n;
    }
    void output()
    {
        cout<<n<<"!="<<jiecheng(n)<<endl;
    }
    int jiecheng(int num)
    {
        if(num==1)
            return 1;
        else if(num==0)
            return 0;
        else
            return num*jiecheng(num-1);
    }
};

int main()
{
    A a;
    a.input();
    a.output();
    return 0;
}
