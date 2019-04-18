#include <iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    A()
    {
        cout<<"A begin!"<<endl;
    }
    ~A()
    {
        cout<<"A over!"<<endl;
    }
};

int main()
{
    A a;
    cout<<"------------------"<<endl;
    return 0;
}
