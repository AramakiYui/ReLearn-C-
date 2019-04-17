#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class File
{
private:
    ofstream f1;
    string s;
    string filename;
public:
    File(string name)
    {
        filename=name;
        f1.open(filename.c_str(),ios::binary|ios::app);//追加ios::app
    }
    ~File()
    {
        f1.close();
    }
    void Write()
    {
        s="abcde";
        f1.write((char*)s.c_str(),s.size());
    }
    void App()
    {
        f1.seekp(0,ios::end);//写定位seekp
        string temp="12345";
        f1.write((char*)temp.c_str(),temp.size());
    }
};

int main()
{
    File f("001.txt");
    f.Write();
    f.App();
    return 0;
}
