#include <iostream>
#include <iomanip>//格式化输出
using namespace std;

class date
{
private:
    int year,month,day;
public:
    void input()
    {
        cout<<"input year:";cin>>year;
        cout<<"input month:";cin>>month;
        cout<<"input day:";cin>>day;
    }
    void output()
    {
        cout<<"the date is:"
            <<year<<"-"<<month<<"-"<<day<<endl;
//格式化输出，域宽：2，不足位补‘0’
        cout<<year<<"-"
            <<setw(2)<<setfill('0')<<month<<"-"
            <<setw(2)<<setfill('0')<<day<<endl;
    }
};
int main()
{
    date d1;
    d1.input();
    d1.output();
    return 0;
}
