#include <iostream>
using namespace std;

class Prime
{
private:
    int n;
public:
    void input()
    {
        cout<<"input a number:";
        cin>>n;
    }
    bool prime(int m)
    {
        int i;
        for(i=2;i<m;++i)
        {
            if(m%i==0) return false;
        }
        return true;
    }
    void output()
    {
        int i;
        for(i=1;i<=n;++i)
        {
            if(prime(i))
                cout<<i<<endl;
            else
                continue;
        }
    }
};


int main()
{
    Prime p;
    p.input();
    p.output();

    return 0;
}
