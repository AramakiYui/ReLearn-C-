#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void f_read(string filename)
{
    string s;
    ifstream f(filename.c_str(),ios::in);//filename.c_str() 字符串类型-->字符指针类型
    f>>s;
    cout<<s<<endl;
    f.close();
}

int main()
{
    string filename;
    cout<<"input filename:";
    cin>>filename;
    f_read(filename);

    return 0;
}
