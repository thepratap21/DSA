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
    int value;
    node* head=nullptr;
    node* tail=nullptr;

    int c;
    cout<<"To enter data in LL press 1"<<" ";
    cin>>c;

    while(c==1)
    {
        cout<<"Enter value to be inserted"<<" ";
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
            tail=newnode;
        }
        cout<<"To enter a node again, press 1"<<" ";
        cin>>c;
    }
    cout<<"LL after initail insertion is"<<" ";
    int count=0;
    node* temp=head;
    while(temp!=nullptr)
    {   count +=1;
        cout<<temp->data<<" : ";
        temp=temp->next; 
    }

 int middle=floor(count/2);
 int a=1;
node* trav=head;
if(head->next==nullptr)
{   
    node*del=head;
    head=nullptr;
    delete del;
    cout<<endl;
    cout<<"List is now empty";
    return 0;
}
 while(middle>a)
 {
    trav=trav->next;
    a++;
 }
 node* del=trav->next;
 trav->next=trav->next->next;
 delete del;
 cout<<endl;
 
 cout<<"List after deletion of middle node is"<<" ";
 node* temp1=head;
 while(temp1!=nullptr)
 {
    cout<<temp1->data<<": ";
    temp1=temp1->next;
 }
}