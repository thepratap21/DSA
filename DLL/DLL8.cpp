#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;

    node(int value)
    {
        data=value;
        next=nullptr;
        prev=nullptr;
    }
};

int main()
{
    node* head=nullptr;
    node* tail=nullptr;

    cout<<"To enter data in DLL, press 1"<<" ";
    int c;
    cin>>c;
    int value;

    while(c==1)
    {   cout<<"Enter value to be inserted"<<" ";
        cin>>value;
        node* newnode=new node(value);

        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        cout<<"To enter more data press 1, to exit press 0"<<" ";
        cin>>c;

    }
    cout<<"Current DLL is"<<" ";
    node* t=head;
    while(t!=nullptr)
    {
        cout<<t->data<<" : ";
        t=t->next;
    }
    cout<<"To enter a missing value, press 2"<<" ";
    int a;
    cin>>a;
    if(a==2)
    {
    cout<<"enter the data before which you want to enter new data"<<" ";
    int data;
    cin>>data;
    cout<<"Enter the missing value"<<" ";
    cin>>value;
    node* trav=head;
    node* newnode=new node(value);
    if(head->data==data)
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    else
    {
      while(trav->data !=data && trav!=nullptr)
       {
        trav=trav->next;
       }
       trav->prev->next=newnode;
       newnode->prev=trav->prev;
       newnode->next=trav;
       trav->prev=newnode;
       trav=newnode;

    } 
}
    cout<<"DLL after insertion is"<<" "<<endl;
    node* p=head;
    while(p!=nullptr)
    {
        cout<<p->data<<" : ";
        p=p->next;
    }
    
}