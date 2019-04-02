#include <iostream>
using namespace std;

class A
{
private:
    int m,n;
public:
    void input()
    {
        cout<<"input m:";
        cin>>m;
        cout<<"input n:";
        cin>>n;
    }
    void output()
    {
        cout<<"m="<<m<<endl;
        cout<<"n="<<n<<endl;
    }
    A operator +(A a)
    {
        A temp;
        temp.m=m+a.m;
        temp.n=n+a.n;
        return temp;
    }
};

int main()
{
    A a1,a2,a3;
    a1.input();
    a2.input();
    a3=a1+a2;
    a3.output();
    return 0;
}
