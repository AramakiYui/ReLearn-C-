#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class File
{
private:
    ifstream f1;
    ofstream f2;
    string s;//读写字符串
    string filename1,filename2;
    string::size_type n;//长度变量n
public:
    File(string name1,string name2)
    {
        filename1 = name1;
        filename2 = name2;
        f1.open(filename1.c_str(),ios::binary);
        f2.open(filename2.c_str(),ios::binary);
    }
    void ReadFile()
    {
        f1.seekg(0,ios::end);//读文件指向文件尾
        n = f1.tellg();//文件长度
        s.resize(n);
        f1.seekg(0,ios::beg);//指向文件开头

        f1.read((char*)s.c_str(),n);
        f1.close();
    }
    void WriteFile()
    {
        f2.seekp(0,ios::beg);//写文件指向文件头
        f2.write((char*)s.c_str(),n);
        f2.close();
    }
    void turn()
    {
        ReadFile();
        string ss;
        ss.resize(n);
        for(string::size_type i=0;i<n;++i)
            ss[i] = s[n-i-1];
        s = ss;
        WriteFile();
    }
};
int main()
{
    File f1("f1.txt","f2.txt");
    f1.turn();
    File f2("f2.txt","f3.txt");
    f2.turn();

    return 0;
}
