#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "abcde";
    string s1 = "bc";
    //long n1,n2;
    string::size_type n1,n2;//表示字符位置的变量,实际上是无符号的长整数
    if(s.find(s1,0)!=string::npos)//string::npos > string::size_type
    {
        n1 = s.find(s1,0);//子串的头位置
        n2 = n1 + s1.size();//子串的结束位置
        cout<<"n1="<<n1<<endl;
        cout<<"n2="<<n2<<endl;
    }
    else
        cout<<"not found!"<<endl;

    return 0;
}
