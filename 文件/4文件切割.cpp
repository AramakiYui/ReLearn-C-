#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class File
{
private:
    fstream f;
    string s,s1,s2;
    string filename;
    string::size_type n;
public:
    File(string name)
    {
        filename = name;
        f.open(filename.c_str(),ios::binary|ios::in|ios::out);
    }
    ~File()
    {
        f.close();
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
    void Cut1()
    {
        Read();
        s1=s.substr(0,100);
        s2=s.substr(100,s.size()-100);
        s=s2+s1;
        Write();
    }
    void Cut2()
    {
        Read();
        s1=s.substr(0,s.size()-100);
        s2=s.substr(s.size()-100,100);
        s=s2+s1;
        Write();
    }
};

int main()
{
    File f("001.txt");
    f.Cut1();
    f.Cut2();
    return 0;
}
