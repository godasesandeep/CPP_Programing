#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class student
{
    string name;
    int rno,rating;
    public:
    void getData(void)
    {
        cout<<"Enter student name : "<<endl;
        //cin.ignore(255,'\n');
        getline(cin,name);
        cout<<"Enter student roll number : "<<endl;
        cin>>rno;
        cout<<"Student rating :"<<endl;
        cin>>rating;
    }
    void show(void)
    {
        cout<<"Student name : "<<name<<endl
        <<"Student roll number : "<<rno<<endl
        <<"Student rating : "<<rating<<endl;
    }

};

int main()
{
    ifstream fin;
    student sobj;
    //sobj.getData();
    fin.open("student.txt",ios::in);
    //fin.seekg(0);
    while(fin.read((char *)&sobj,sizeof(sobj)))
    {
    sobj.show();
    }
    fin.close();
    return 0;
}