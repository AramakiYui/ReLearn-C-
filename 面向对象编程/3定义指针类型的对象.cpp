#include <iostream>
using namespace std;

class square
{
private:
    int n;
public:
    void input()
    {
        cout<<"input a number:";
        cin>>n;
    }
    void output()
    {
        cout<<"square:"<<n*n<<endl;
    }
    int value()
    {
        return n*n;
    }
};

int main()
{
    square s1;
    s1.input();
    cout<<s1.value()<<endl;

    square* s2;//定义指针类型
    s2=&s1;
    s2->output();
    s2->input();
    cout<<s2->value()<<endl;
    return 0;
}
