#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1="abcde",s2="12345",s;
    s = s1 + s2;//字符串的拼接
    cout<<"========================"<<endl;
    cout<<s<<endl;
    cout<<s.size()<<endl;   //求得字符串长度
    //cout<<s.max_size()<<endl; //字符串的最大长度

    return 0;
}
