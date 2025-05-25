#include<iostream>
using namespace std;

//program 361

struct node
{
    int data;
    struct node * next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public :
        PNODE first;
        int count;

    SinglyLL();

    void display();
    int Count();

    void insertFirst(int no);
    void insertLast(int no);
    void insertAtPos(int no, int pos);

    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
            
};

SinglyLL::SinglyLL()
{
    cout<<"Inside Constructor \n";
    first =NULL;
    count=0;
}

void SinglyLL::display()
{
    PNODE temp1 = first; //Important step need to create temperery pointer otherwise permenantly change the first pointer
    while(temp1 !=NULL)
    {
        cout<<temp1->data<<endl;
        temp1=temp1->next;
    }

}

int SinglyLL::Count()
{
    return count;
}

void SinglyLL:: insertFirst(int no)
{
    PNODE newNode =NULL;
    newNode =new NODE;
    newNode->data=no;
    newNode->next =NULL;
    if(first ==NULL) //count==o
    {
        first=newNode;
        return;
    }
    else
    {
        newNode->next =first;
        first =newNode;
    }
    count++;

}

void SinglyLL::insertLast(int no)
{
    PNODE newNode =NULL;
    PNODE temp = first;

    newNode = new NODE; //malloc
    newNode->data =no;
    newNode->next =NULL;

    if(first ==NULL)
    {
        first=newNode;
        return;
    }
    else{
        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
    count++;

}

void SinglyLL::insertAtPos(int no, int pos)
{
    PNODE newNode =NULL;
    int i =0;
    PNODE temp=NULL;

    if((pos<1)||(pos>count+1))
    {
        cout<<"Invalid position \n";
        return;
    }    
    if(pos==1)
    {
        insertFirst(no);
    }
    else if(pos==count+1)
    {
        insertLast(no);
    }
    else
    {
        newNode = new NODE;
        newNode->data =no;
        newNode->next =NULL;
        temp=first;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newNode->next = temp->next;
        temp->next=newNode;
        count++;
    }
    

}

void SinglyLL::deleteFirst()
{
    PNODE temp = first;
    if(first==NULL)
    {
        cout<<"LL is empty \n";
        return;
    }
    else if(first ->next ==NULL)
    {
        delete first;
        first =NULL;
    }
    else
    {
        // temp =first mentioned in above 
        first =first->next;
        delete temp;
    }
    count--;
}

void SinglyLL::deleteLast()
{
    PNODE temp = first;
    if(first==NULL)
    {
        cout<<"LL is empty \n";
        return;
    }
    else if(first ->next ==NULL)
    {
        delete first;
        first =NULL;
    }
    else
    {
        // temp =first mentioned in above 
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next =NULL;
    }
    count--;
}

void SinglyLL::deleteAtPos(int pos)
{

}

int main()
{
    SinglyLL obj;
    int iRet=0;

    obj.insertFirst(51);
    obj.insertFirst(21);
    obj.insertFirst(11);

    obj.insertLast(101);
    obj.insertLast(111);
    obj.insertLast(121);

    obj.deleteFirst();
    obj.deleteLast();

    obj.insertAtPos(100,3);

    obj.display();

    iRet = obj.Count();
    cout<<"Number of element in link list are :"<<iRet<<endl;
    return 0;
}