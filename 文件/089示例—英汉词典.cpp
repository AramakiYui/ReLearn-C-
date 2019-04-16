#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Dict
{
private:
    string filename;
    string line_str,word1,word2;//行字符串，输入单词，查找到的单词
    ifstream f;
public:
    Dict(string name)
    {
        filename = name;
        f.open(filename.c_str(),ios::in);
        if(!f)
        {
            cout<<"open file erroe!";
            exit(0);
        }
    }

    ~Dict()
    {
        f.close();
    }

    void f_search()
    {
        string::size_type n;//字符串位置变量
        cout<<"input a word:";
        cin>>word1;
        while(!f.eof())
        {
            getline(f,line_str);
            if(line_str.find(word1,0)!=string::npos)
            {
                n = line_str.find(" ",0);//找到第一个空格的位置
                word2 = line_str.substr(0,n);//取出空格前的子串
                if(word1==word2)//判断是否与单词一样
                {
                    cout<<line_str<<endl;
                    break;
                }
            }
        }
        if(f.eof())
        {
            cout<<"no word!"<<endl;
        }
    }
};

int main()
{
    Dict d("Dic.txt");
    d.f_search();

    return 0;
}
