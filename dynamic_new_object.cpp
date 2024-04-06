#include<iostream>

using namespace std;

class demo
{
    public:
        int a,b;
        demo()
        {
            cout<<"inside the constructor \n";
            a=10;
            b=11;
        }
        demo(int i,int j)
        {
            cout<<"inside the constructor \n";
            a=i;
            b=j;
        }
        ~demo()
        {
            cout<<"Inside the destructor \n";
        }
        void fun()
        {
            cout<<"Inside the fun function \n";
        }
};

int main()
{
    //demo obj1; //-->Static memory allocation

    demo * ptr =new demo(1,9); //--> Dynamic memory allocation in C++

    //demo *ptr =(demo *)malloc(sizeof(demo)); //-->We can use c functions also but constructor/distructor not called

    ptr->fun();

    cout<<ptr->a<<endl;
    cout<<ptr->b<<endl;

    delete ptr;

    //free(ptr);

    return 0;
}