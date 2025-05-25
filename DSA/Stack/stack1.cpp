#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Stack
{
    private:
    PNODE first;
    int iCount;

    public:
    Stack();
    void display();
    int count();
    void push(int no); //insertFirst()
    int pop(); //deletefirst()
};

Stack::Stack()
{
    iCount=0;
    first=NULL;
}
void Stack::display()
{
    cout<<"Element of stack are : \n";
    PNODE temp = first;

    while(temp !=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int Stack::count()
{
    return iCount;
}
void Stack::push(int no) //insertFirst()
{
    PNODE newNode =NULL;
    newNode = new NODE;

    newNode->data=no;
    newNode->next=NULL;

    if(first == NULL)
    {
        first==newNode;

    }
    else
    {
        newNode->next=first;
        first=newNode;
    }
    iCount++;
}
int Stack::pop()
{
    return 0;
}

//display not working
//pop()
int main()
{

    Stack obj;
    
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);

    obj.display();

    cout<<"number of element "<<obj.count();

    return 0;
}