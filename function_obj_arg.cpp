#include<iostream>

using namespace std;

class time
{
    int hour;
    int minute;
    public:
    void get_time(int h,int m)
    {
        hour=h;
        minute =m;
    }

    void put_time(void);
    void sum(time,time);
    
};

void time::put_time()
    {
        cout<<"Hour :"<<hour;
        cout<<"   Minutes : "<<minute<<endl;
    }

void time::sum(time t1,time t2)
    {
        minute=t1.minute+t2.minute;
        hour=minute/60;
        minute=minute%60;
        hour=hour+t1.hour+t2.hour;
    }

int main()
{
    time t1,t2,t3;
    t1.get_time(2,45);
    t2.get_time(3,30);
    t3.sum(t1,t2);
    t1.put_time();
    t2.put_time();
    t3.put_time();

    return 0;
}