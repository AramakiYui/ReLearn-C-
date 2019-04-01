#include <iostream>
#include <string>
using namespace std;

class book
{
private:
    string number;
    string name;
public:
    void input()
    {
        cout<<"input book number:";cin>>number;
        cout<<"input book name:";cin>>name;
    }
    void output()
    {
        cout<<"the book is:"
           <<number<<"："<<name<<endl;
    }
};

int main()
{
    book b;
    b.input();
    b.output();

    return 0;
}
