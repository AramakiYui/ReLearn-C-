#include <iostream>
using namespace std;

class cal
{
private:
    int a,b;
public:
    void input()
    {
        cout<<"input a:";cin>>a;
        cout<<"input b:";cin>>b;
    }
    int add()
    {
        return a+b;
    }
    int sub()
    {
        return a-b;
    }
    void output()
    {
        cout<<a<<"+"<<b<<"="<<add()<<endl;
        cout<<a<<"-"<<b<<"="<<sub()<<endl;
    }
};

int main()
{
    cal c;
    c.input();
    c.output();

    return 0;
}
