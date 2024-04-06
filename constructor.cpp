#include<iostream>

using namespace std;

class Arithmatic
{
    public:
        int no1;
        int no2;

        Arithmatic()
        {
            cout<<"Inside default constructor \n";
            no1=0;
            no2=0;
        }

        Arithmatic(int a, int b)
        {
            cout<<"Inside the parameterised constructor \n";
            no1=a;
            no2=b;
        }

        Arithmatic(Arithmatic &ref)
        {
            cout<<"Inside copy constructor \n";
            no1=ref.no1;
            no2=ref.no2;

        }
        ~Arithmatic()
        {
            cout<<"Inside Distructor \n";
        }

};

int main()
{
    Arithmatic obj1;
    Arithmatic obj2(10,11);
    Arithmatic obj3(obj2);
    cout<<obj1.no1<<"\t"<<obj1.no2<<endl;
    cout<<obj2.no1<<"\t"<<obj2.no2<<endl;
    cout<<obj3.no1<<"\t"<<obj3.no2<<endl;

    return 0;
}

