#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "-王小二-89-张小三-95-李小二-100-";
    string s1 = "小二";
    //long n1,n2,n3;
    string::size_type n1,n2,n3,pos=0;
    string name,score;
    while(true)
    {
        if(s.find(s1,pos)!=string::npos)
        {
            n1 = s.find(s1,pos);
            n1 = s.rfind("-",n1);//rfind()逆向查询
            n2 = s.find("-",n1+1);
            n3 = s.find("-",n2+1);
            name = s.substr(n1+1,n2-n1-1);
            score = s.substr(n2+1,n3-n2-1);//注意长度

            cout<<"name:"<<name<<endl;
            cout<<"score:"<<score<<endl;
            pos = n3;
        }
        else
            break;
    }
    return 0;
}
