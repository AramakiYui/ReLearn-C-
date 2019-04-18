#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string num2str(double i)
{
    stringstream ss;
    string s;
    ss<<i;
    ss>>s;
    return s;
}

double str2num(string s)
{
    stringstream ss;
    double i;
    ss<<s;
    ss>>i;
    return i;
}

int main()
{
    double i = 2.5;
    string s = "2.5";
    cout<<num2str(i)<<endl;
    cout<<str2num(s)<<endl;
    return 0;
}
