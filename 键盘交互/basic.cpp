#include <windows.h>
#pragma comment(lib,"winmm.lib")

//光标移动到指定坐标处
void gotoxy(int x,int y)
{
    HANDLE h;//句柄，对象的索引
    COORD c;//结构体，坐标值
    c.X=x;
    c.Y=y;
    h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,c);
}

//关闭光标
void hide_cursor()
{
    HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor_info;
    GetConsoleCursorInfo(h_GAME,&cursor_info);
    cursor_info.bVisible = false;       //不显示光标
    SetConsoleCursorInfo(h_GAME,&cursor_info);
}

//显示光标
void show_cursor()
{
    HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor_info;
    GetConsoleCursorInfo(h_GAME,&cursor_info);
    cursor_info.bVisible = true;       //显示光标
    SetConsoleCursorInfo(h_GAME,&cursor_info);
}

//设置文本颜色
void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}

//播放声音文件
void sound(char *s)
{
    //PlaySound(s,0,0);//同步播放
    //PlaySound(s,0,1);//异步播放，可作为背景声音
}
