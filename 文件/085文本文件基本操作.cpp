#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string s1 = "line1",s2 = "line2";
    ofstream f1("f1.txt",ios::out);//定义写文件句柄
    f1<<s1<<endl;
    f1<<s2<<endl;
    f1.close();//释放句柄
//===============================================
    ifstream f2("f1.txt",ios::in);//定义读文件句柄
    //f2>>s1;
    //f2>>s2;
    getline(f2,s1);
    getline(f2,s2);
    f2.close();//释放句柄
    cout<<s1<<endl;
    cout<<s2<<endl;

    return 0;
}
