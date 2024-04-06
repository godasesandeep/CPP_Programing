#include<stdio.h>

//extern int i;
extern int i;
extern int j;
extern int arr[4];
extern void fun();

void gun();

int main()
{
    //int i =11;
    printf("Value of i is %d \n",i); // defined i @ bollom of main then decleared it at top as extern int i;
    printf("Value of j is %d \n",j); //From external file file2.cpp decleared as extern int j; o/p-21

    j=51;
    printf("Value of j is %d \n",j); //Give the preference to local value j , o/p-51
    printf("Value of arr is %d \n",arr[0]); //from external file extern int arr o/p-10

    fun(); //ERROR gone-->after declearation void gun(); Inside the outside fun
    gun(); //Inside gun
    return 0;
}

int i =11;

void gun()
{
    printf("inside gun \n");
}