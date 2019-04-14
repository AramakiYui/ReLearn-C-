#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct A
{
    string name;
    string phone;
};

class B
{
private:
    vector <A> a;
    A temp;
public:
    B()
    {
        temp.name = "1";temp.phone="111";a.push_back(temp);
        temp.name = "2";temp.phone="222";a.push_back(temp);
        temp.name = "3";temp.phone="333";a.push_back(temp);
        temp.name = "3";temp.phone="555";a.push_back(temp);
    }
    void input()
    {
        while(true)
        {
            cout<<"input name('0'over):";cin>>temp.name;
            if(temp.name=="0")
                break;
            cout<<"input phone:";cin>>temp.phone;
            a.push_back(temp);
        }
    }
    void output()
    {
        cout<<"-----------------------------------"<<endl;
        for(int i=0;i<a.size();++i)
            cout<<i+1<<" "<<a[i].name<<"-"<<a[i].phone<<endl;
        cout<<"-----------------------------------"<<endl;
    }
    void find_name()//ÔÊÐíÖØÃû
    {
        string s;
        cout<<"input find name:";cin>>s;
        int i=0;
        bool flag=false;
        for(i=0;i<a.size();++i)
        {
            if(s==a[i].name)
            {
                 cout<<a[i].name<<"-"<<a[i].phone<<endl;
                 flag=true;
            }
        }
        if(flag==false)
            cout<<"not found!"<<endl;
    }
    void edit()
    {
        int m;
        output();
        cout<<"input edit NO.:";cin>>m;
        if(m>0 && m<=a.size())
        {
            cout<<m<<" "<<a[m-1].name<<"-"<<a[m-1].phone<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"input name:";cin>>a[m-1].name;
            cout<<"input phone:";cin>>a[m-1].phone;
            output();
        }
        else
            cout<<"Number Error!"<<endl;
    }
    void del()
    {
        int m;
        char c;
        output();
        cout<<"input delete NO.:";cin>>m;
        if(m>0 && m<=a.size())
        {
            cout<<m<<" "<<a[m-1].name<<"-"<<a[m-1].phone<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"delete?(y/n):";cin>>c;
            if(c=='y')
                a.erase(a.begin()+m-1);
            output();
        }
        else
            cout<<"Number Error!"<<endl;
    }
};


int main()
{
    B b;
    b.input();
    b.output();
    b.find_name();
    b.edit();
    b.del();
	return 0;
}
