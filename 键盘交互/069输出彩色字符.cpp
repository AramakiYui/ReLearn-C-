#include <windows.h>
#include <iostream>
using namespace std;

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}

int main()
{
    int i;
    for(i=0;i<128;++i)
    {
        color(i);
        cout<<i<<"-hello"<<endl;
    }
    return 0;
}
