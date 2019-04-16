#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "-王小二-89-张小三-95-李小四-100-";
    string s1 = "张小三";
    //long n1,n2,n3;
    string::size_type n1,n2,n3;
    string name,score;

    if(s.find(s1,0)!=string::npos)
    {
        n1 = s.find(s1,0);
        n2 = s.find("-",n1);
        n3 = s.find("-",n2+1);
        name = s.substr(n1,n2-n1);
        score = s.substr(n2+1,n3-n2-1);//注意长度

        cout<<"name:"<<name<<endl;
        cout<<"score:"<<score<<endl;
    }
    return 0;
}
