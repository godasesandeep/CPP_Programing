#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ofstream fout;

string line;

fout.open("sample.txt",ios::app);
if(!fout)
{cout<<"File is not created : ";}
else{
while(fout)
{
    cout<<"Enter the name : ";
    getline(cin,line);//read line from standard input
    if(line=="-1")
        break;
    fout<<line<<endl; //writing line into file

}
fout.close();
}

return 0;

}
