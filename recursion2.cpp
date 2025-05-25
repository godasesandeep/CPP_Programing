#include<iostream>

using namespace std;

void RecursiveDisplay(int No)
{
    if(No>0)
    {
    No--;
    printf("* \n");
    RecursiveDisplay(No);
    }
}

int main()
{
    RecursiveDisplay(5);
    return 0;
}