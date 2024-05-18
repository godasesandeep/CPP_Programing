#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //string line;
    char line[10];
    ifstream fin;
    fin.open("sample.txt");//default mode ios::in mode
    while(!fin.eof())
    {
    fin>>line;
    cout<<line<<endl;
    }
    //or we can write code like below
   /* 
    while(getline(fin,line))//execute loop until end of file
    {
        cout<<line<<endl;//print line in console
    }
    */
    fin.close(); 
    return 0;
}