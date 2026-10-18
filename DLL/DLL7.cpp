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
{   node* head=nullptr;
    node*tail=nullptr;
    int arr[5]={1,2,3,4,5};
    
    for(int i=0;i<5;i++)
    {   

        node* newnode=new node(arr[i]);
        if(i==0)
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
        
    }
    cout<<"Dll is"<<" ";
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" : ";
        temp=temp->next;
    }
}