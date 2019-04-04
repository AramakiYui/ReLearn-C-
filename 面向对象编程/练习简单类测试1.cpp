// 1、构造如下类，在主函数中进行测试。
// 成员数据：一个整数。
// 成员函数：构造函数、输入函数、判断函数：若数据为偶数？输出“YES！”，否则输出“NO！”


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
        cout<<"n="<<n<<endl;
    }
    void sentence()
    {
        if(n>0 && n%2==0)
            cout<<"YES!"<<endl;
        else
            cout<<"NO!"<<endl;
    }
};

int main()
{
    A a;
    a.input();
    a.output();
    a.sentence();
    return 0;
}
