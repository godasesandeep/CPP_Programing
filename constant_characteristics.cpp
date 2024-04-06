#include<iostream>

using namespace std;

class demo
{
    public:
        const int x;
        const int y;
        int z;
        demo(int i, int j, int k) : x(i),y(j) //initialization list
        {
            cout<<"constructor \n";
            z=k;
        }
        
};

int main()
{
    demo obj1(11,21,51);
    cout<<obj1.x<<endl;
    cout<<obj1.y<<endl;

    //obj1.x++; //Not allowed
    //obj1.y++; //Not allowed
    obj1.z++;
    cout<<obj1.z<<endl;

    return 0;
}