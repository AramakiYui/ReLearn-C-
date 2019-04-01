#include <iostream>
using namespace std;

class point
{
private:
    int x,y;
public:
    void input()
    {
        cout<<"input x:";
        cin>>x;
        cout<<"input y:";
        cin>>y;
    }
    void output()
    {
        cout<<"the point is:"
            <<"("<<x<<","<<y<<")"<<endl;
    }
};

class line
{
private:
    point p1,p2;
public:
    void input()
    {
        p1.input();
        p2.input();
    }
    void output()
    {
        p1.output();
        p2.output();
    }
};

int main()
{
    line m;
    m.input();
    m.output();
    return 0;
}
