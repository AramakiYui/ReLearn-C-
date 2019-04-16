#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s="ability   n.能力",s1,s2;
    int n1,n2;
    n1=s.find(" ",0);
    n2=n1;
    while(true)
    {
        ++n2;
        if(s.substr(n2,1)!=" ")
            break;
    }
    s1=s.substr(0,n1);
    s2=s.substr(n2,s.size()-n2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}
