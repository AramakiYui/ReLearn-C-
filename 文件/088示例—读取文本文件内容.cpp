#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void f_read(string filename)
{
    string s;
    ifstream f(filename.c_str(),ios::in);//filename.c_str() 字符串类型-->字符指针类型
    while(!f.eof())//f.eof()判断文件读指针是否到达文件尾
    {
        getline(f,s);
        cout<<s<<endl;
    }
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
