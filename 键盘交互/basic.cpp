#include <windows.h>
#pragma comment(lib,"winmm.lib")

//����ƶ���ָ�����괦
void gotoxy(int x,int y)
{
    HANDLE h;//��������������
    COORD c;//�ṹ�壬����ֵ
    c.X=x;
    c.Y=y;
    h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,c);
}

//�رչ��
void hide_cursor()
{
    HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor_info;
    GetConsoleCursorInfo(h_GAME,&cursor_info);
    cursor_info.bVisible = false;       //����ʾ���
    SetConsoleCursorInfo(h_GAME,&cursor_info);
}

//��ʾ���
void show_cursor()
{
    HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor_info;
    GetConsoleCursorInfo(h_GAME,&cursor_info);
    cursor_info.bVisible = true;       //��ʾ���
    SetConsoleCursorInfo(h_GAME,&cursor_info);
}

//�����ı���ɫ
void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}

//���������ļ�
void sound(char *s)
{
    //PlaySound(s,0,0);//ͬ������
    //PlaySound(s,0,1);//�첽���ţ�����Ϊ��������
}
