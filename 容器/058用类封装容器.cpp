#include <iostream>
#include <vector>
#include <algorithm>//�㷨ͷ�ļ�
#include <numeric>//accumulate()������Ҫ�������

using namespace std;

class score
{
private:
    vector <int> a;
public:
//====================================================
    //����������static������Ϊ�����ж����Ƕ�������
    static bool sort1(int n1,int n2)
    {
    return n1>n2;
    }
    static void add1(int &n)//ע����'����'����ֵ
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
    void add()//�ӷ�
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
