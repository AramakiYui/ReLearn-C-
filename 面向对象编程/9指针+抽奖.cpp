#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct student
{
    int number;
    student* next;
};

class Select
{
private:
    int max, times;
    student* head,* end,* p;
public:
    Select()
    {
        max=10;
        times=3;
    }
    Select(int mm,int tt)
    {
        max=mm;
        times=tt;
    }
    void init()
    {
        head=new student;
        end=head;
        for(int i=1;i<=max;++i)
        {
            p=new student;
            p->number=i;
            end->next=p;
            end=p;
        }
        end->next=NULL;
    }
    void browse()
    {
        p=head;
        while(p->next!=0)
        {
            p=p->next;
            cout<<p->number<<endl;
        }
        cout<<endl;
    }
    void select()   //抽出一名幸运观众杀掉
    {
        int temp,m=max;
        student* q;
        srand(time(NULL));
        for(int i=0;i<times;++i)
        {
            temp=rand()%m+1;
            p=head;
            while(true)
            {
                q=p;
                p=p->next;
                --temp;
                if(temp==0)
                {
                    cout<<p->number<<endl;
                    q->next=p->next;
                    delete p;
                    --m;
                    break;
                }
            }
        }
        cout<<endl;
    }
};

int main()
{
    Select s(20,5);
    s.init();
    s.browse();
    s.select();
    s.browse();
    return 0;
}
