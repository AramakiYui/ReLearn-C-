#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Select
{
private:
    int max,times;
public:
    Select()
    {
        max=10;
        times=3;
    }
    Select(int mm,int tt)
    {
        max=mm;
        times=tt;
    }
    void select()
    {
        srand(time(NULL));
        int i,s,n=0;
        int a[times];

        s=rand()%max+1;
        while(true)
        {
            if(inarray(s,a,n))
            {
                a[n]=s;
                ++n;
            }
            if(n==times)
                break;
            s=rand()%max+1;
        }
        for(i=0;i<times;++i)
            cout<<a[i]<<endl;
    }
    int inarray(int rand, int* array,int n)
    {
        int i;
        for(i=0;i<n;++i)
            if(rand==array[i])
                return 0;
        return 1;
    }
};

int main()
{
    Select s(100,20);
    s.select();
    return 0;
}
