#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class File
{
private:
    ifstream f1;
    ofstream f2;
    string s;
    string filename1,filename2;
    string::size_type n;
public:
    File(string name1,string name2)
    {
        filename1 = name1;
        filename2 = name2;
        f1.open(filename1.c_str(),ios::binary);
        f2.open(filename2.c_str(),ios::binary);
    }
    ~File()
    {
        f1.close();
        f2.close();
    }
    void Copy()
    {
        f1.seekg(0,ios::end);//指向文件尾
        n = f1.tellg();//文件长度
        s.resize(n);
        f1.seekg(0,ios::beg);//指向文件开头

        f1.read((char*)s.c_str(),n);
        f2.write((char*)s.c_str(),n);
        cout<<s<<endl;
    }
};
int main()
{
    File f("f1.dat","f2.dat");
    f.Copy();

    return 0;
}
