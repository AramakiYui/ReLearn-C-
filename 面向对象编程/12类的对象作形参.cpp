#include <iostream>
using namespace std;

class point
{
private:
    int x,y;
public:
    point(int a=0,int b=0)//构造函数合二为一，默认构造函数和带参数构造函数
    {
        x=a;y=b;
    }
    void display()
    {
        cout<<"point :["<<x<<","<<y<<"]"<<endl;
    }
};

ostream& operator <<(ostream& os,point p)// 对象p作形参
{
    p.display();
    return os;
}

void output(point& p)// 对象p作形参
{
    p.display();
}

int main()
{
    point p(2,3);
    cout<<p;
    output(p);
    return 0;
}
