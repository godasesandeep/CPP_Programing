#include<iostream>

using namespace std;


int main()
{

float x ;
float sum=0;
int i=1;
for(;i<5;i++)
{
    cout<<"Enter number";
    cin>>x;
    sum=sum+x;
    float k=sum;
}
printf("Sum of first for number is : %f \n",sum);
float average=sum/(i-1);
printf("average of first 4 number is : %f \n",average);

cout<<"Sum is : %d"<<k;

return 0;

}