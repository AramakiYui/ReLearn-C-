#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "abcdeABCDE";
    for(int i=0;i<(int)s.size();++i)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i] + 32;
    }
    cout<<s<<endl;


    return 0;
}
