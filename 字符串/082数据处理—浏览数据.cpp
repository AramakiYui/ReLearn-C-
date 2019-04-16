#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "-王小二-89-张小三-95-李小四-100-";
    string name,score;
    string::size_type n1,n2,n3,pos=0;

    while(true)
    {
        if(s.find("-",pos)!=string::npos)
            n1 = s.find("-",pos);
        else
            break;
        if(s.find("-",n1+1)!=string::npos)
            n2 = s.find("-",n1+1);
        else
            break;
        if(s.find("-",n2+1)!=string::npos)
            n3 = s.find("-",n2+1);
        else
            break;
        name = s.substr(n1+1,n2-n1-1);
        score = s.substr(n2+1,n3-n2-1);

        cout<<"name:"<<name<<endl;
        cout<<"score:"<<score<<endl;
        pos = n3;
    }
    return 0;
}
