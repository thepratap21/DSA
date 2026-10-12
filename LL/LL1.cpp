#include<bits/stdc++.h>
using namespace std;


 struct Node{
        int data;
        Node* next;
        Node (int value)
        {
            data=value;
            next=nullptr;
        }
    };
int main()
{
    int choice;
    cout<<"Enter 1 to create a node in linked list"<<" ";
    cin>>choice;
    int value;
    Node* head=nullptr;
    Node* tail=nullptr;

    while(choice==1)
    { 
      cout<<"Enter data"<<" ";
      cin>>value;
      Node* newNode= new Node(value);
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
        cout<<"To enter more data enter 1"<<" ";
        cin>>choice;
    }
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"  : ";
        temp=temp->next;
    }
return 0;


    
}