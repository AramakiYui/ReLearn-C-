#include <iostream>
using namespace std;

class A
{
private:
    int i;
public:
    A()
    {
        i=10;
    }
    A(int ii)
    {
        i=ii;
    }
    void output()
    {
        cout<<"i="<<i<<endl;
    }
    A operator ++()     //++i
    {
        A temp(i);
        temp.i = i+1;
        i=i+1;
        return temp;
    }
	// A operator ++()     //++i,this是指向对象自身的指针
 //    {
 //    	++i;
 //    	return *this;
 //    }
    A operator ++(int n)    //i++
    {
        A temp(i);
        temp.i = i;
        i=i+1;
        return temp;
    }
};

int main()
{
    A a,b;
    b=a++;//b=++a
    a.output();
    b.output();
    return 0;
}
