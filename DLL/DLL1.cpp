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
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);

    node* head=first;
    first->next=second;
    first->prev=nullptr;

    second->next=third;
    second->prev=first;

    third->next=fourth;
    third->prev=second;

    fourth->prev=third;

    cout<<"The DLL is"<<" ";
    node* temp=head;
 while(temp!=nullptr)
 {
    cout<<temp->data<<" : ";
    temp=temp->next;
 }   
}