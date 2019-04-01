#include <iostream>
using namespace std;

class add
{
private:
    int a,b;
public:
    add()
    {
        a=5;
        b=10;
    }
    add(int aa,int bb)
    {
        a=aa;
        b=bb;
    }
    add(int bb)
    {
        a=10;
        b=bb;
    }
    void output()
    {
        cout<<"sum="<<a+b<<endl;
    }
};

int main()
{
    add a1;
    a1.output();
    add a2(5,10);
    a2.output();
    add a3(10);
    a3.output();
    return 0;
}
