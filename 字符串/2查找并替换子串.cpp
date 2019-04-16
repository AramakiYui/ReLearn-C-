#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "abcdefg";
    string s1 = "cde";
    string s2 = "CDE";

    string::size_type n;
    cout<<s<<endl;
    n = s.find(s1,0);

    s.replace(n,s1.size(),s2);//开始位置，替换长度，替换子串
    cout<<s<<endl;

    return 0;
}
