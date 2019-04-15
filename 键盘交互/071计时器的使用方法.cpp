#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    clock_t t1,t2;//定义计时器变量
    long n = 10000000;
    t1 = clock();
    while(--n);//产生一段时间
    t2 = clock();
    cout<<t1<<endl;
    cout<<t2<<endl;

    return 0;
}
