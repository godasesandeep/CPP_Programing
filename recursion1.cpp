#include<iostream>

using namespace std;

void display(int no)
{
    static int i=0;
    if(i<no)
    {
    printf("Jay ganesh \n");
    i++;
    display(no); //recursion
    }
    
}

int main()
{
    display(4);
    return 0;
}