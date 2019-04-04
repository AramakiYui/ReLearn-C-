//��һ��Days�࣬����2019�������꣩���һ�����ڣ��¡��գ���
//�����2019��1��1�տ�ʼ�����������������������

#include <iostream>
using namespace std;

class Days
{
private:
	int month;
	int day;
public:
	Days(int mm, int dd)
	{
		month=mm;
		day=dd;
	}
	void output()
	{
	    cout<<"Today is 2019."<<month<<"."<<day<<endl;
		cout<<"Total days from 2019.1.1 is:"<<total()<<endl;
	}
	int daysnumber(int num)
	{
		switch(num)
		{
			case 4:case 6:case 9:case 11:
				return 30;
			case 2:
				return 28;
			default:
				return 31;
		}
	}
	int total()
	{
		int i,sum=0;
		for(i=1;i<month;++i)
		{
			sum += daysnumber(i);
		}
		sum = sum + day - 1;
		return sum;
	}
};

int main()
{
	Days d(12,31);
	d.output();

	return 0;
}
