#include <iostream>
using namespace std;

class cal
{
private:
    int a,b;
public:
    cal(int aa,int bb)  //类的构造函数，自动执行
    {
        a=aa;
        b=bb;
    }
    void input()
    {
        cout<<"input a:";cin>>a;
        cout<<"input b:";cin>>b;
    }
    int add()
    {
        return a+b;
    }
    void output()
    {
        cout<<"sum="<<add()<<endl;
    }
};

int main()
{
    cal c(1,2);
    //c.input();
    c.output();

    return 0;
}
