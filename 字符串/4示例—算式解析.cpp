#include <iostream>
#include <string>
#include <sstream>//srt->num流
using namespace std;

int str2num(string s)
{
    int n;
    stringstream ss;//字符串流
    ss<<s;
    ss>>n;
    return n;
}

int main()
{
    string s = "1+2",s1,s2;
    int n1,n2;
    n1 = s.find("+",0);
    n2 = n1 + 1;

    s1 = s.substr(0,n1);
    s2 = s.substr(n2,s.size()-n2);

    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<str2num(s1)+str2num(s2)<<endl;

    return 0;
}
