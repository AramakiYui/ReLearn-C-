#include <iostream>
#include <cstdlib>
using namespace std;

//指针复习及动态内存分配
int main()
{
    int* p1=new int;
    *p1=100;
    cout<<*p1<<endl;
    cout<<p1<<endl;
    cout<<&p1<<endl;
    delete p1;
//====================C用法===================
    cout<<endl;
    int* p2=(int*)malloc(sizeof(int));
    *p2=200;
    cout<<*p2<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    free(p2);

    return 0;
}


////引用复习
//void add(char& m)
//{
//    m = m+2;
//}
//int main()
//{
//    char c;
//    cout<<"input char:";
//    cin>>c;
//    add(c);
//    cout<<"the char is:"<<c<<endl;

//    return 0;
//}
