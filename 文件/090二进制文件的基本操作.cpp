#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class File
{
private:
    ofstream f1;
    ifstream f2;
    string s1,s2;
    string filename;
    string::size_type n;
public:
    File(string ss,string name)
    {
        s1 = ss;
        filename = name;
        f1.open(filename.c_str(),ios::binary);//二进制打开
        f2.open(filename.c_str(),ios::binary);
    }
    ~File()
    {
        f2.close();
    }
    void Write()
    {
        f1.write((char*)s1.c_str(),s1.size());
        f1.close();
    }
    void Read()
    {
        f2.seekg(0,ios::end);//指向文件尾
        n = f2.tellg();//文件长度
        s2.resize(n);//定义s2为长度n的空串
        f2.seekg(0,ios::beg);//指向文件头
        f2.read((char*)s2.c_str(),n);
        cout<<s2<<endl;
    }
};
int main()
{
    File f("hello!","f2.dat");
    f.Write();
    f.Read();

    return 0;
}
