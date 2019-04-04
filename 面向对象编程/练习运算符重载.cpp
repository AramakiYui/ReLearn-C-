#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
protected:
	int x1,y1;
public:
	Point()
	{
		x1=0;
		y1=0;
	}
	Point(int x,int y)
	{
		x1=x;
		y1=y;
	}
};

class Line:public Point
{
protected:
	int x2,y2;
public:
	Line()
	{
		x2=0;
		y2=0;
	}
	Line(int xx1,int yy1,int xx2,int yy2)
		:Point(xx1,yy1)
	{
		x2=xx2;
		y2=yy2;
	}
	void output()
	{
		cout<<"("<<x1<<","<<y1<<")";
		cout<<" --> ";
		cout<<"("<<x2<<","<<y2<<")";
	}
	Line operator -(Line l)
	{
		Line temp;
		temp.x1 = x2;
		temp.y1 = y2;
		temp.x2 = l.x1;
		temp.y2 = l.y1;
		return temp;
	}
	friend ostream& operator <<(ostream& os,Line l)
	{
		l.output();
		return os;
	}
};

int main()
{
	Line l1(2,3,1,2);
	Line l2(5,6,8,9);
	Line l3;
	l3=l1-l2;
	cout<<l3;
	return 0;
}
