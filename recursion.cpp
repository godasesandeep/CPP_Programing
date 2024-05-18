#include<iostream>

using namespace std;

void display(int no)
{
    if(no==0)
        return;
    printf("Jay ganesh \n");
    display(no-1);
    
}

int main()
{
    display(4);
    return 0;
}