#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Guess
{
private:
    int n;
    int min,max;
public:
    Guess()
    {
        min=1;
        max=1000;
        srand(time(NULL));
        n=rand()%1000+1;
    }
    void guess()
    {
        int m;
        cout<<"开始猜数！"<<endl;
        cout<<"guess(1~1000):";
        while(true)
        {
            cin>>m;
            if(m>n)
            {
                cout<<"大了!"<<endl;
                if(m<max)
                    max = m;
                cout<<"guess("<<min<<"~"<<max<<"):";
            }
            else if(m<n)
            {
                cout<<"小了!"<<endl;
                if(m>min)
                    min = m;
                cout<<"guess("<<min<<"~"<<max<<"):";
            }
            else
            {
                cout<<"正确!"<<endl;
                break;
            }
        }
    }
};

int main()
{
    Guess g;
    g.guess();
    return 0;
}
