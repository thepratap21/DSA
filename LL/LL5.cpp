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
    node* firstnode=new node(10);
    node* secondnode=new node(20);
    node* thirdnode=new node(30);
    node* fourthnode=new node(40);
    node* fifthnode=new node(50);

    node* head=firstnode;
    head->next=secondnode;
    secondnode->next=thirdnode;
    thirdnode->next=fourthnode;
    fourthnode->next=fifthnode;

    cout<<"Current LL is"<<" ";
     node* temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" :";
            temp=temp->next;
        }

      cout<<endl;

    cout<<"To delete the node from head press 1 and to delete from last press 2"<<" ";
    int n;
    cin>>n;
    if(n==1)
    {
        head=firstnode->next;
        cout<<"New LL is"<<" ";
        node* temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" :";
            temp=temp->next;
        }
    
    }
    if(n==2)
    {
     fourthnode->next=nullptr;
     cout<<"New LL is"<<" ";
        node* temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" :";
            temp=temp->next;
        }
    }
}