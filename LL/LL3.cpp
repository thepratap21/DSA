#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

    node(int value)
    {
      data=value;
    next=nullptr;
    }
};

int main()
{   cout<<"To enter data press 1"<<" ";
    int choice;
    cin>>choice;
    node* head= nullptr;
    node*tail= nullptr;
    int value;
    while(choice==1)
    {
    cout<<"Enter data "<<" ";
    cin>>value;
    node* newNode = new node(value);
    if(head==nullptr)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
       tail->next=newNode;
       tail=newNode;
    }
     cout<<"To enter more data, press 1"<<" ";
        cin>>choice;
    }

    cout<<"Linked list after insertion is :"<<" ";
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"  : ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Do you want to add data at the beginning? If yes then press 2"<<" ";
    int c;
    cin>>c;
    if(c==2)
    {   cout<<"Enter value to be inserted"<<" ";
        cin>>value;
        node* newnode= new node(value);
        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
          newnode->next=head;
          head=newnode;
        }
    }
    cout<<"Your new linked list after inserting element at first postion is"<<" ";
    node* temp2=head;
    while(temp2!=nullptr)
    {
        cout<<temp2->data<<"  : ";
        temp2=temp2->next;
    }
return 0;
}