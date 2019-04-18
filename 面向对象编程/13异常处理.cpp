#include <iostream>
using namespace std;

const int error_0=0;
const int error_1=1;

double ave(double money,int number=30)
{
    if(number>1)
        return (money/number);
    else if(number==0)
    {
        throw error_0;//扔出错误0
        return money;
    }
    else if(number==1)
    {
        throw error_1;//扔出错误1
        return money;
    }
    else
        return 0;
}

int main()
{
    try
    {
        cout<<ave(1000)<<endl;
        cout<<ave(1000,35)<<endl;
        cout<<ave(1000,1)<<endl;
    }
    catch(int error)//捕获错误
    {
        switch(error)
        {
            case error_0:
                cout<<"error:zero_devide!"<<endl;
                break;
            case error_1:
                cout<<"warn:devide is 1!"<<endl;
                break;
        }
    }
    return 0;
}
