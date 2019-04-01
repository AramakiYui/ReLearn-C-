#include <iostream>
using namespace std;

class square
{
private:
    int n;
public:
    square() //直接初始化
    {
        n=5;
    }
    square(int nn)  //参数初始化
    {
        n = nn;
    }
    void output()
    {
        cout<<"square="<<n*n<<endl;
    }
};

int main()
{
    square c1;
    c1.output();
    square c2(5);
    c2.output();

    return 0;
}
