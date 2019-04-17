#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class File
{
private:
    fstream f;//fstream流,同时读写
    string s;
    string filename;
    string::size_type n;
public:
    File(string name)
    {
        filename = name;
        f.open(filename.c_str(),ios::binary|ios::in|ios::out);//同时读写一个文件
    }
    ~File()
    {
        f.close();
    }
    void reverse()
    {
        Read();
        string temp;
        temp.resize(s.size());
        for(int i=0;i<(int)s.size();++i)
        {
            temp[i]=s[s.size()-i-1];
        }
        s=temp;
        Write();
    }
    void Read()
    {
        f.seekg(0,ios::end);
        n=f.tellg();
        s.resize(n);
        f.seekg(0,ios::beg);
        f.read((char*)s.c_str(),n);
        cout<<s<<endl;
    }
    void Write()
    {
        f.seekp(0,ios::beg);
        f.write((char*)s.c_str(),s.size());
    }
};

int main()
{
    File f("001.txt");
    f.reverse();
    f.Read();
    return 0;
}
