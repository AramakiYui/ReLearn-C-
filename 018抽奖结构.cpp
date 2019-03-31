#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

//方法一:time(NULL)
// int rand_number()
// {
// 	return time(NULL);
// }

//方法二:rand()
int rand_number()
{
    return rand();
}

int main()
{
	srand(time(NULL));	//更快的滚动
	int i;
	while(true)
	{
	 	system("cls");
	    string name[3]={"王小二","张小三","李小四"};
	    i = rand_number()%3;
	    cout<<"the person is:"<<name[i]<<endl;
		if(kbhit())	//按下键盘停止
			break;
	}
	system pause("pause");

    return 0;
}



// long rand_number()	//毫秒级随机数
// {
// 	SYSTEMTIME sys;
// 	GetLocatTime(&sys);
// 	return sys.wMilliseconds;
// }


// unsigned long rand_number()	//纳秒级随机数
// {
// 	__asm RDTSC
// }
