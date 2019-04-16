#include <iostream>
#include <string>
using namespace std;

void reverse(string& ss)
{
    string temp = ss;
    long n = ss.size();
    for(int i=0;i<n;++i)
    {
        temp[i] = ss[n-i-1];
    }
    ss = temp;
}
int main()
{
    string s = "disk";
    reverse(s);
    cout<<s<<endl;

    return 0;
}
