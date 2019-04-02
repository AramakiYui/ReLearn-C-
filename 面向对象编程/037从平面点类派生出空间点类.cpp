#include <iostream>
using namespace std;

class point_2D
{
protected:
    int x,y;
public:
    point_2D()
    {
        x=0;y=0;
    }
    point_2D(int xx,int yy)
    {
        x=xx;y=yy;
    }
    void output_2D()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
};


class point_3D:public point_2D
{
protected:
    int z;
public:
    point_3D()
    {
        z=0;
    }
    point_3D(int zz)
    {
        z=zz;
    }
    point_3D(int xx,int yy,int zz):point_2D(xx,yy)
    {
        z=zz;
    }
    void output_3D()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
        cout<<endl;
    }
};

int main()
{
    point_3D p1;
    point_3D p2(5);
    point_3D p3(1,2,3);
    p1.output_3D();
    p2.output_3D();
    p3.output_3D();
    return 0;
}
