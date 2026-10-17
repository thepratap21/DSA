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
     node* temp=tail;
     
     while(temp!=nullptr)
     {
        cout<<temp->data<<" : ";
        temp=temp->prev;
     } 
}