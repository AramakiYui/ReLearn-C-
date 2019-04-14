#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    int i;
    for(i=0;i<a.size();++i)
        cout<<a[i]<<endl;
    a.erase(a.begin()+1);
    for(i=0;i<a.size();++i)
        cout<<a[i]<<endl;
    return 0;
}
