#include <iostream>
using namespace std;

class square
{
private:
    int n;
public:
    square(int nn)
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
    square c(5);
    c.output();

    return 0;
}
