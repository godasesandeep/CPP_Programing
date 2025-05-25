#include<iostream>

using namespace std;

struct node
{
    struct node * prev;
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCL
{
    private:
    PNODE first;
    PNODE last;
    int iCount;

    public:
    DoublyCL();

    void display();
    int count();

    void insertFirst(int no);
    void insertLast(int no);
    void insertAtPos(int no, int pos);

    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
    
};

DoublyCL::DoublyCL()
{
    first =NULL;
    last =NULL;
    iCount =0;
}

void DoublyCL:: display()
{
    if(first==NULL && last==NULL)
    {
        cout<<"Linked list is empty \n";
        return;
    }

    do
    {
        cout<<"| "<<first->data<<" | <=>";
        first=first->next;
    }while(last->next!=first);
    cout<<endl;
  
}
int DoublyCL::count()
{
    return iCount;
}

void DoublyCL::insertFirst(int no)
{
    PNODE newNode =NULL;
    newNode = new NODE;
    newNode->data=no;
    newNode->next=NULL;
    newNode->prev=NULL;

    if((first==NULL)&&(last==NULL))
    {
        first =newNode;
        last=newNode;
    }
    else
    {
        newNode->next=first;
        first->prev=newNode;
        first=newNode;   
    }
    last->next=first;
    first->prev=last;
    iCount++;
}
void DoublyCL:: insertLast(int no)
{
    PNODE newNode =NULL;
    newNode = new NODE;
    newNode->data=no;
    newNode->next=NULL;
    newNode->prev=NULL;

    if((first==NULL)&&(last==NULL))
    {
        first =newNode;
        last=newNode;
    }
    else
    {
        last->next=newNode;
        newNode->prev=last;
        last=newNode; //doubly thats why need not required traversal to insert the last element 
    }
    last->next=first;
    first->prev=last;
    iCount++;
}
void DoublyCL:: insertAtPos(int no, int pos)
{
    PNODE temp =NULL;
    PNODE newNode=NULL;
    int i=0;
    if(pos<1||pos>iCount+1)
    {
        cout<<"Invalid postion \n";
        return;
    }
    if(pos==1)
    {
        insertFirst(no);

    }
    else if(pos==iCount+1)
    {
        insertLast(no);
    }
    else
    {
        newNode = new NODE;
        newNode->data =no;
        newNode->next=NULL;
        newNode->prev =NULL;

        temp = first;

        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }

        newNode->next =temp->next;
        //temp->next->prev
    }
}

void DoublyCL:: deleteFirst()
{
    if(first==NULL && last==NULL) //empty ll
    {
        return;
    }
    else if(first==last) //single node
    {
        delete first;
        first=NULL;
        last=NULL;
    }
    else //more than one element
    {
        first=first->next;
        delete last->next;
        first ->prev=last;
        last->next=first;
    }
    iCount --;
}
void DoublyCL:: deleteLast()
{
    if(first==NULL && last==NULL)
    {
        return;
    }
    else if(first==last)
    {
        delete first;
        first=NULL;
        last=NULL;
    }
    else
    {
        last =last->prev;
        delete first ->prev;
        last->next=first;
        first->prev=last;
    }
    iCount--;
}
void DoublyCL:: deleteAtPos(int pos)
{
    PNODE temp =NULL;
    int i=0;
    if(pos<1||pos>iCount)
    {
        cout<<"Invalid postion \n";
        return;
    }
    if(pos==1)
    {
        deleteFirst();

    }
    else if(pos==iCount)
    {
        deleteLast();
    }
    else
    {

        temp = first;

        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next= temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        iCount--;
    }
}

//insertAtPos incomplit

int main()
{

    DoublyCL obj;

    obj.insertFirst(51);
    obj.insertFirst(21);
    obj.insertFirst(11);

    obj.insertLast(101);
    obj.insertLast(111);
    obj.insertLast(121);

    //obj.deleteFirst();
    //obj.deleteLast();

    obj.deleteAtPos(5);

    obj.display();

    cout<<"Number of elements are : "<<obj.count()<<endl;

    return 0;
}