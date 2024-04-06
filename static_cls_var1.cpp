#include<iostream>

using namespace std;

class Demo
{
    public:
        int no1,no2; //non static characteristic
        static int x; //static characteristic

    Demo()
    {
        no1=10;
        no2=20;
    }

    void fun() //non static behaviour
    {
        cout<<"Inside fun \n";
        cout<<no1<<endl; //acess non static characteristic
        cout<<x<<endl;  //acess also non static characteristic
    }

    static void gun() //static behaviour
    {
        cout<<"Inside gun \n";
        cout<<x<<endl;

    }

};

int Demo::x=11;

int main()
{
    cout<<"value of x is :"<<Demo::x<<endl; //11
    Demo::gun(); //inside gun //11

    Demo obj1,obj2;

    cout<<"Size of object : "<<sizeof(obj1)<<endl; //8

    cout<<obj1.no1<<"\t"<<obj1.no2<<endl; //10 20
    cout<<obj2.no1<<"\t"<<obj2.no2<<endl; //10 20

    obj1.fun(); //inside fun //10 //11
    obj2.fun(); //inside fun //10 //11

    obj1.gun(); // static fun can acess using object also

    cout<<"Value of class variable x using object"<<obj1.x<<endl;

    return 0;
}