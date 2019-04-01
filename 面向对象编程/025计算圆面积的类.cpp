#include <iostream>
using namespace std;
const double PI = 3.1415926

class circle
{
public:	
	int r;
	double area ()
	{
		return r*r*PI;
	}
};

int main()
{
	circle c1,c2;
	c1.r=2;
	c2.r=5;
	cout<<c1.area()<<endl;
	cout<<c2.area()<<endl;
	return 0;
}
