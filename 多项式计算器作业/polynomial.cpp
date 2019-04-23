#include "polynomial.h"

Polynomial::Polynomial()
{
    n=0;
    x=0;
}

Polynomial::Polynomial(double xx)
{
    x=xx;
    double temp;
    int i =1;
    cout<<"请输入"<<i++<<"个多项式常数:";
    while(cin>>temp,temp!=0)
    {
        cout<<"请输入"<<i++<<"个多项式常数:";
        a.push_back(temp);

    }
    n=a.size();
}

Polynomial::Polynomial(const Polynomial &obj)
{
    n=obj.n;
    x=obj.x;
    vector <double> a;
    for(int i=0;i<n;++i)
        a.push_back(obj.a[i]);
}

Polynomial::~Polynomial()
{
    clearvector();
}

void Polynomial::clearvector()
{
    vector <double> ().swap(a);//清除容器并最小化它的容量
}

string Polynomial::judge(double a)
{
    string c;
    if(a>=0)
        c="+";
    else
        c="";
    return c;
}

string Polynomial::double_string(double a)
{
    stringstream ss;
    ss<<a;
    string s1;
    ss>>s1;
    return s1;
}

string Polynomial::display()
{
    string s="",temp;
    if(a[0]!=0)
    {
        temp = double_string(a[0]);
        s.append(temp);
        temp="";
    }
    if(a[1]!=0)
    {
        s.append(judge(a[1]));
        temp = double_string(a[1]);
        s.append(temp);
        temp="";
        s.append("x");
    }
    for(int i=2;i<n;++i)
    {
        if(a[i]!=0)
        {
            s.append(judge(a[i]));
            temp = double_string(a[i]);
            s.append(temp);
            temp="";
            s.append("x^");
            temp = double_string(i);
            s.append(temp);
            temp="";
        }
    }
    return s;
}

string Polynomial::answer()
{
    string s,temp;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum += a[i]*pow(x,i);
    }
    temp = double_string(sum);
    s.append(temp);
    return s;
}

Polynomial& Polynomial::operator =(const Polynomial& obj1)
{
    if(a.begin() != a.end())
        clearvector();
    n = obj1.n;
    vector <double> a;
    for(int i=0;i<n;++i)
        a.push_back(obj1.a[i]);
    return *this;
}

Polynomial Polynomial::operator +(const Polynomial& obj1)
{
    Polynomial po(obj1);
    po.n = max(n, obj1.n);
    po.clearvector();
    for(int i=0; i<min(n,obj1.n); ++i)
        po.a.push_back(a[i] + obj1.a[i]);
    if(max(n, obj1.n) == n)
    {
        for(int i=min(n, obj1.n); i<max(n, obj1.n); ++i)
            po.a.push_back(a[i]);
    }
    else
    {
        for(int i=min(n, obj1.n); i<max(n, obj1.n); ++i)
            po.a.push_back(obj1.a[i]);
    }
    return po;
}

Polynomial Polynomial::operator -(const Polynomial& obj1)
{
    Polynomial po(obj1);
    po.n = max(n,obj1.n);
    po.clearvector();
    for(int i=0; i<min(n,obj1.n); ++i)
        po.a.push_back(a[i] - obj1.a[i]);
    if(max(n, obj1.n) == n)
    {
        for(int i=min(n, obj1.n); i<max(n, obj1.n); ++i)
            po.a.push_back(a[i]);
    }
    else
    {
        for(int i=min(n, obj1.n); i<max(n, obj1.n); ++i)
        {
            po.a.push_back(-obj1.a[i]);
        }
    }
    return po;
}

Polynomial Polynomial::operator *(const Polynomial& obj1)
{
    Polynomial po(obj1);
    po.n = n + obj1.n;
    po.clearvector();
    int i,j;
    for(i=0; i<po.n; i++)
        po.a.push_back(0);
    for(i=0; i<n; i++)
    {
        for(j=0; j<obj1.n; j++)
        {
            if(a[i]!=0 && obj1.a[i]!=0)
                po.a[i+j] += a[i] * obj1.a[j];
        }
    }
    return po;
}
