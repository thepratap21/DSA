#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*  next;

    node(int value)
    {
        data=value;
        next=nullptr;
    }
};
int main()
{
  node* head=nullptr;
  node* tail=nullptr;
  cout<<" To enter data in linked list press 1 "<<" ";
  int choice;
  cin>>choice;
  int value;

  while(choice==1)
  {
    cout<<"Enter data to be inserted"<<" ";
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
    cout<<"To enter data again, press 1 again - to exit press 0"<<" "<<endl;
    cin>>choice;
  }
  cout<<endl;

  cout<<"Initial Linked list after insertion of data is"<<" :";

    cout<<endl;

  node* temp=head;
  while(temp!=nullptr)
  {
    cout<<temp->data<<" : ";
    temp=temp->next;

  }

  
  int d;
  cout<<endl;
  cout<<"To delete last node press 1"<<" "<<endl;
  cin>>d;
  if(d==1)
  {
    node* temp1=head;
    if(head==nullptr)
    {
        cout<<"List is empty"<<" "<<endl;
    }
    else if(head->next==nullptr)
    {
        delete head;
        head=nullptr;
        tail=nullptr;
        cout<<"List is now empty";
    }
    else 
    {   while(temp1->next->next!=nullptr)
        {
        temp1=temp1->next;
        }
        delete temp1->next;
        temp1->next=nullptr;
        tail=temp1; 
    }
  }
cout<<"Linked list after deletion of data is"<<" "<<endl;
  node* temp2=head;
  while(temp2!=nullptr)
  {
    cout<<temp2->data<<" : ";
    temp2=temp2->next;

  }
    

}
