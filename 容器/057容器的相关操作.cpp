#include <iostream>
#include <vector>
#include <algorithm>//�㷨ͷ�ļ�
#include <numeric>//accumulate()������Ҫ�������

using namespace std;

void output(vector <int> b)
{
    for(int i=0;i<b.size();++i)
        cout<<b[i]<<endl;
    cout<<endl;
}

bool sort1(int n1,int n2)
{
    return n1>n2;
}

int main()
{
    vector <int> a;
    a.push_back(2);
    a.push_back(5);
    a.push_back(4);
    a.push_back(3);
    a.push_back(1);
    output(a);

    //sort(a.begin(),a.end());//��С��������
	sort(a.begin(),a.end(),sort1);//�Ӳ���sort1�Ӵ�С����
    output(a);

    cout<<"max="<<*max_element(a.begin(),a.end())<<endl;//������Ԫ��
    cout<<"min="<<*min_element(a.begin(),a.end())<<endl;//�����СԪ��
    cout<<"sum="<<accumulate(a.begin(),a.end(),0)<<endl;//���Ԫ����ֵ֮��
	return 0;
}
