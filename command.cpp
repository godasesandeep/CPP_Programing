#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("No of argument %d \n",argc);
    for(int i=0;i<argc;i++)
    {
        printf("%s \n",argv[i]);
    }
    return 0;
}

//g++ comand.cpp -o out
//./out PPA 11 LB

//First parameter argc(name may be you want) which contains number of arguments as number of command line arguments