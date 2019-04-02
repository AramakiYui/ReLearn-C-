#include <iostream>
using namespace std;

class A
{
private:
    int m,n;
public:
    void input()
    {
        cout<<"input m:";
        cin>>m;
        cout<<"input n:";
        cin>>n;
    }
    void output()
    {
        cout<<"m="<<m<<endl;
        cout<<"n="<<n<<endl;
    }
    //若放在类内，记得变为友元函数！
//    friend istream& operator >>(istream& os,A& a)  //记得带引用！！！
//    {
//        a.input();
//        return os;
//    }

//    friend ostream& operator <<(ostream& os,A a)
//    {
//        a.output();
//        return os;
//    }
};

istream& operator >>(istream& os,A& a)  //记得带引用！！！
{
    a.input();
    return os;
}

ostream& operator <<(ostream& os,A a)
{
    a.output();
    return os;
}

int main()
{
    A a;
    //a.input();
    //a.output();
    cin>>a;
    cout<<a;
    return 0;
}
