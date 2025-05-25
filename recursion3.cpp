#include<iostream>

using namespace std;

void RecursiveDisplay()
{
    static int i =0;
    if(i<5)
    {
    i++;
    printf("* \n");
    RecursiveDisplay();
    }
}

int main()
{
    RecursiveDisplay();
    return 0;
}