#include <windows.h>
#pragma comment(lib,"winmm.lib")
#include <iostream>
using namespace std;

void sound(char *s)
{
    //PlaySound(s,0,0);//ͬ������
    PlaySound(s,0,1);//�첽���ţ�����Ϊ��������
}

int main()
{
    sound("sound.wav");
    system("pause");
    return 0;
}
