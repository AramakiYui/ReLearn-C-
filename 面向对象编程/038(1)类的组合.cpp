#include <iostream>
#include <string>
using namespace std;

class date
{
private:
    int year;
    int month;
    int day;
public:
    date(int yy, int mm, int dd)
    {
        year=yy;
        month=mm;
        day=dd;
    }
    void display()
    {
        cout<<"birthday:"
           <<year<<"-"<<month<<"-"<<day<<endl;
    }
};

class student
{
private:
    string name;
    date birthday;
public:
    student(string nn, int yy, int mm, int dd)
        :birthday(yy,mm,dd)
    {
        name = nn;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        birthday.display();
    }
};

int main()
{
    student s("wang",1999,04,19);
    s.display();

    return 0;
}
