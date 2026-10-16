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
    cout<<"The lenghth of LL is"<<" ";
    node* trav=head;
    int count=0;
    while(trav!=nullptr)
    {
      count +=1;
      trav=trav->next;
    }
    cout<<count;
}
