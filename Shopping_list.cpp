#include<iostream>

using namespace std;

const int m=50;

class ITEAM
{
    int iteamCode[m];
    float iteamPrice[m];
    int count;

    public:
    ITEAM()
    {
        count=0;
    }

    void getIteam(void);
    void displaySum(void);
    void removeIteam(void);
    void displayIteams(void);
};

void ITEAM::getIteam(void)
    {
        int x;
        cout<<"Enter the Iteam Code \n";
        cin>>x; //cin<<iteamCode[count]
        iteamCode[count]=x;
        cout<<"Enter the Price of Iteam";
        cin>>x; //cin<<iteamPrice[count];
        iteamPrice[count]=x;
        count++;
    }

void ITEAM::displayIteams(void)
    {
        cout<<"  Code  Price \n";
        for(int i=0;i<count;i++)
            cout<<"  "<<iteamCode[i]<<"  "<<iteamPrice[i]<<endl;

    }

void ITEAM::displaySum(void)
    {
        float sum=0;
        for(int i=0;i<count;i++)
            sum=sum+iteamPrice[i];
        cout<<"\n Total value of Iteams : "<<sum<<endl;
    }

void ITEAM::removeIteam(void)
    {
        int x;
        cout<<"Enter Iteam Code : "<<endl;
        cin>>x;
        for(int i=0;i<count;i++)
            if(iteamCode[i]==x)
                iteamPrice[i]=0;
        
    }


int main()
{
    ITEAM order;
    int x;
    do
    {
        cout<<"\n you can do the following \n"
        <<"\n1: Add an Iteam "
        <<"\n2: Display Total Value"
        <<"\n3: Delete an Iteam "
        <<"\n4: Display All Iteams"
        <<"\n5: Quit \n";
        cout<<"What is your option? \n";
        cin>>x;
        
        switch(x)
            {
                case 1: order.getIteam();break;
                case 2: order.displaySum();break;
                case 3: order.removeIteam();break;
                case 4:order.displayIteams();break;
                case 5:break;
                default:cout<<"Error in input;Try again \n";
            }
    }while(x!=5);
    return 0;
}