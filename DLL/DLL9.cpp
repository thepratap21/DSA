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
    int value;
    int c;
    cout<<"To enter data in DLL press 1"<<" ";
    cin>>c;

    while(c==1)
    {
        cout<<"Enter data"<<" ";
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
        cout<<"To enter more data press 1, else press 0 to exit : "<<" ";
        cin>>c;
    }
       node* t=head;
       cout<<"Current DLL is"<<" ";
       while(t!=nullptr)
       {
        cout<<t->data<<" : ";
        t=t->next;
       }

       cout<<"Enter the data that you want to delete from DLL"<<" ";
       int data;
       cin>>data;

       if(head->data == data)
{
    node* del = head;
    head = head->next;

    if(head != nullptr)
        head->prev = nullptr;
    else
        tail = nullptr;

    delete del;
}
       else
       {
        node* temp1=head;
        while(temp1 != nullptr && temp1->data != data)
        {
            temp1=temp1->next;
        }
        node* del=temp1;
        temp1->prev->next=temp1->next;
        temp1->next->prev=temp1->prev;

        delete del;

       }
       cout<<"DLL after deletion is"<<" ";
       node* trav=head;
       while(trav!=nullptr)
       {
        cout<<trav->data<<" : ";
        trav=trav->next;
       }
}