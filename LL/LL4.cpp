#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=nullptr;
    }
};

int main()
{
    cout<<"Press 1 to enter data in linked list"<<" ";
    int c;
    cin>>c;
    node* head=nullptr;
    node* tail= nullptr;
    int value;

    while(c==1)
    {   
        cout<<"Enter data"<<" ";
        cin>>value;
        node* newnode= new node(value);
        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        cout<<"To enter more data, press 1"<<" ";
        cin>>c;
    }
    cout<<endl;
    cout<<"LL after initial insertion is:"<<" ";
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" : ";
        temp=temp->next;

    }
    cout<<endl;
    cout<<"To enter data at any position enter 2"<<" ";
    int a;
    cin>>a;
    if(a==2)
    {
        int pos;
        cout<<"Enter position at which you want to enter data"<<" ";
        cin>>pos;
        cout<<"Enter data"<<" ";
        cin>>value;
        node* newnode=new node(value);
        node* trav=head;
        int p=1;
        while(p<pos-1)
        {
            trav=trav->next;
            p++;
        }
        newnode->next=trav->next;
        trav->next=newnode;
        cout<<"New LL after isertion at"<<" "<<pos<<"ith position is"<<" ";
        node*temp1=head;
        while(temp1!=nullptr)
        {
            cout<<temp1->data<<" : ";
            temp1=temp1->next;
        }

    }
}