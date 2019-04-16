#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "abcdefg";
    string s1 = "cde";

    string::size_type n;
    cout<<s<<endl;
    n = s.find(s1,0);

    s.erase(n,s1.size());//开始位置，子串长度
    cout<<s<<endl;

    return 0;
}
