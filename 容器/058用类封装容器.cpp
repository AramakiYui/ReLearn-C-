#include <iostream>
#include <vector>
#include <algorithm>//算法头文件
#include <numeric>//accumulate()函数需要，求和用

using namespace std;

class score
{
private:
    vector <int> a;
public:
//====================================================
    //规则函数，加static，函数为类所有而不是对象所有
    static bool sort1(int n1,int n2)
    {
    return n1>n2;
    }
    static void add1(int &n)//注意用'引用'返回值
    {
        n=n+5;
    }
//====================================================
    void input()
    {
        int temp;
        while(true)
        {
            cout<<"input score:('-1'over)";
            cin>>temp;
            if(temp==-1)
                break;
            else
                a.push_back(temp);
        }
    }
    void output()
    {
        for(int i=0;i<a.size();++i)
            cout<<a[i]<<endl;
        cout<<endl;
    }
    void sort_BigtoSmall()
    {
        sort(a.begin(),a.end(),sort1);
    }
    void max_num()
    {
        cout<<"Max Score:"<<*max_element(a.begin(),a.end())<<endl;
    }
    void aver()
    {
        double sum = accumulate(a.begin(),a.end(),0);
        cout<<"Average Score:"<<sum/a.size()<<endl;
    }
    void add()//加分
    {
        for_each(a.begin(),a.end(),add1);
    }
};

int main()
{
    score s;
    s.input();
    s.output();
    s.sort_BigtoSmall();
    s.output();
    s.max_num();
    s.aver();
    s.add();
    s.output();
	return 0;
}
