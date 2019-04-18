#include <iostream>
#include <string>
using namespace std;

namespace ns1
{
    class student
    {
    private:
        int num;
        string name;
    public:
        student(int n,string s)
        {
            num=n;
            name=s;
        }
        void display()
        {
            cout<<"num:"<<num<<endl;
            cout<<"name:"<<name<<endl;
        }
    };
}//没有分号

namespace ns2
{
    class student
    {
    private:
        char sex;
        string name;
    public:
        student(char c,string s)
        {
            sex=c;
            name=s;
        }
        void display()
        {
            cout<<"sex:"<<sex<<endl;
            cout<<"name:"<<name<<endl;
        }
    };
}

int main()
{
    ns1::student s1(001,"wang");//定义时指定命名空间
    s1.display();
    ns2::student s2('m',"lin");//定义时指定命名空间
    s2.display();
    return 0;
}
