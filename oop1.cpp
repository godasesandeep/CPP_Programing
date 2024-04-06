#include<iostream>

using namespace std;

//Class Declaration
class demo
{
    public: //Acess Specifier
    int no1; //Characteristics
    int no2; //Characteristics

    demo() //Constructor
    {
        cout<<"Inside Constructor \n";
        no1=11;
        no2=21;
    }

    ~demo() //Distructor
    {
        cout<<"Inside Destructor \n";
    }

    void fun() //Behaviour
    {
        cout<<"Inside Fun of demo class \n";
    }

};

int main()
{
    cout<<"Inside main \n";
    demo obj1;
    cout<<"Size of object is : "<<sizeof(obj1)<<endl;
    cout<<"Value of no1 is : "<<obj1.no1<<"\n";
    cout<<"Value of no2 is : "<<obj1.no2<<endl;
    obj1.fun();

    return 0;
}