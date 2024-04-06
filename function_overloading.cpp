#include<iostream>

using namespace std;

class Arithmatic
{   
    public:

        int addition(int no1,int no2) //Addition@2ii
        {
            int ans;
            ans=no1 +no2;
            return ans;
        }

        int addition(int no1,int no2,int no3) //Addition@3iii //Name mangling --Compiller gives the name,every compiler may give different name
        {
            int ans;
            ans=no1+no2+no3;
            return ans;
        }

        double addition(double no1,double no2) //Addition@2dd
        {
            return no1+no2;
        }

        double addition(double no1, double no2, double no3) //Addition@3ddd
        {
            return no1+no2+no3;
        }

};

int main()
{

    Arithmatic obj;

    cout<<obj.addition(9,10)<<endl;
    cout<<obj.addition(9,10,11)<<endl;
    cout<<obj.addition(9.999,10.9999)<<endl;
    cout<<obj.addition(9.9999,9.9999,10.1111)<<endl;

    return 0;
}