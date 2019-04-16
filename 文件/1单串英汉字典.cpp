#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Dict
{
private:
    string filename1,filename2;
    string s;
    ifstream f1;
    ofstream f2;
public:
    Dict(string name1,string name2)
    {
        filename1 = name1;
        filename2 = name2;
        f1.open(filename1.c_str(),ios::in);
        f2.open(filename2.c_str(),ios::out);
        if(!f1 || !f2)
        {
            cout<<"open file erroe!";
            exit(0);
        }
    }

    ~Dict()
    {
        f1.close();
        f2.close();
    }

    void turn()
    {
        s = "-";
        while(!f1.eof())
        {
            string temp;
            getline(f1,temp);
            s = s + temp + "-";
        }
        f2<<s<<endl;
    }
};

int main()
{
    Dict d("Dic.txt","dict.txt");
    d.turn();

    return 0;
}
