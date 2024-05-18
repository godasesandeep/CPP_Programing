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
        cout<<"Enter student name : ";
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
    ofstream fout;
    student sobj;
    sobj.getData();
    fout.open("student.txt",ios::out|ios::app);
    fout.write((char *)&sobj,sizeof(sobj));
    return 0;
}