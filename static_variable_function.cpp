#include<iostream>

using namespace std;

class Iteam
{
    int code;
    int number;
    static int count;

    public:
        Iteam()
        {
            code =++count;
        }

        void setdata(int a)
        {
            number =a;
        }

        int getdata(void)
        {
            return number;
        }

        static void show_count(void)
        {
            cout<<"number of object is :"<<count<<endl;
        }

        void show_code(void)
        {
            cout<<"code of object is :"<<code<<endl;
        }
};
int Iteam::count; //Class variable must be defined outside the class defination

int main()
{
    Iteam a,b,c;
    Iteam::show_count(); //shows the number of object created-->3

    Iteam d;
    Iteam::show_count(); //-->4

    //set the variable/number for each object
    a.setdata(100);
    b.setdata(200);
    c.setdata(300);
    d.setdata(400);

    c.show_code(); //show unique code of object -->3
    cout<<"Data of 3rd object :"<<c.getdata(); //300
    

    return 0;
}