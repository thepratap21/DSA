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
{
    int c;
    cout<<"To enter data press 1"<<" ";
    node* head=nullptr;
    node* tail=nullptr;
    cin>>c;
    int value;
    while(c==1)
    {   cout<<"Enter data to be inserted"<<" ";
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
        cout<<"To enter more data press 1 again"<<" ";
        cin>>c;
    }
    cout<<"Initial LL after insertion is"<<" "<<endl;
    node* temp=head;
    if(head==nullptr)
    {
        cout<<" LL is empty";
        return 0;
    }
    while(temp!=nullptr){
        cout<<temp->data<<" : ";
        temp=temp->next;
    }
   cout<<"Enter the value before which you want to add another value"<<" ";
   int v;
   cin>>v;
   node* trav=head;
    cout<<"Enter value to add"<<" ";
    cin>>value;
     node* newnode=new node(value);
   if(head->data==v)
   {

    newnode->next=head;
    head=newnode;
   }
   else
   {
   while(trav->next->data!=v && trav!=nullptr)
   {
    trav=trav->next;
   }
   if(trav->next->data==v)
   { 
   
     newnode->next=trav->next;
     trav->next=newnode;
   }
   else
   {
   cout<<"No data found that you entered"<<" ";
   }
   }

   cout<<"New LL after insertion of new data is"<<" "<<endl;
   node* t=head;
   while(t!=nullptr)
   {
    cout<<t->data<<" : ";
    t=t->next;
   }

}
