#include <iostream>
#include <string>
using namespace std;

void turn1(string& ss)
{
    string temp = ss;
    long n = ss.size();
    for(int i=0;i<n;++i)
    {
        temp[i] = ss[n-i-1]-15;//偏移数值为15
    }
    ss = temp;
}

void turn2(string& ss)
{
    string temp = ss;
    long n = ss.size();
    for(int i=0;i<n;++i)
    {
        temp[i] = ss[n-i-1]+15;//反向偏移数值为15
    }
    ss = temp;
}

int main()
{
    string s = "disk";
    turn1(s);
    turn2(s);
    cout<<s<<endl;


    return 0;
}
