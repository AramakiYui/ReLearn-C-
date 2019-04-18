#include <iostream>
#include <string>
using namespace std;

class date
{
protected:  //protected类型允许子类使用其数据
    string year,month,day;
public:
    date(string yy,string mm,string dd)
    {
        year = yy;
        month = mm;
        day = dd;
    }
    virtual void output()
    {
        cout<<"birthday:"
           <<year<<"-"<<month<<"-"<<day<<endl;
    }
};

class person:public date
{
private:
    string name;
public:

    person(string yy,string mm,string dd,string nn):date(yy,mm,dd)
    {
        name = nn;
    }
    virtual void output()
    {
        cout<<"name:"<<name<<endl;
        cout<<"birthday:"
           <<year<<"-"<<month<<"-"<<day<<endl;
    }
};

int main()
{
    date* p;
    date d("2016","04","01");
    person n("2016","04","01","kobe");
    p = &n;
    p->output();

    return 0;
}
