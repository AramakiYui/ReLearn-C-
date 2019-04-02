#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Point
{
private:
    int x,y;
public:
    Point()
    {
        x=0;
        y=0;
    }
    Point(int xx,int yy)
    {
        x=xx;
        y=yy;
    }
    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

class Line
{
private:
    Point p1,p2;
public:
    Line()
    {

    }
    Line(int x1,int y1,int x2,int y2)
        :p1(x1,y1),p2(x2,y2)
    {

    }
    void display()
    {
        p1.display();
        p2.display();
    }
};
int main()
{
    Line l0;
    l0.display();
    Line l(1,2,3,4);
    l.display();
    return 0;
}
