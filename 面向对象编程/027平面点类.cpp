#include <iostream>
using namespace std;

class point
{
private:
    int x,y;
public:
    void input()
    {
        cout<<"input x:";cin>>x;
        cout<<"input y:";cin>>y;
    }
    void output()
    {
        cout<<"the point is:"
           <<"("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    point p;
    p.input();
    p.output();

    return 0;
}
