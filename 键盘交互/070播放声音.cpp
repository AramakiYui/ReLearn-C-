#include <windows.h>
#pragma comment(lib,"winmm.lib")
#include <iostream>
using namespace std;

void sound(char *s)
{
    //PlaySound(s,0,0);//同步播放
    PlaySound(s,0,1);//异步播放，可作为背景声音
}

int main()
{
    sound("sound.wav");
    system("pause");
    return 0;
}
