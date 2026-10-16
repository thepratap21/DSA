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
    cout<<"Enter the data that you want to delete"<<" ";
    int d;
    cin>>d;
   
    if(head->data==d)
    {
        node* del=head;
        head=head->next;

        if(head==nullptr)
        tail=nullptr;

        delete del;
    }

    else{
        node* temp2=head;
        while(temp2->next!=nullptr && temp2->next->data !=d)
        {
            temp2=temp2->next;
        }
        if(temp2->next==nullptr)
        {
            cout<<" Element not found"<<" ";
            return 0;
        }
        else
        {
            node* del=temp2->next;
            temp2->next=del->next;
            delete del;
        }
    }
    node* temp1=head;
    cout<<"LL after deletion is"<<" "<<endl;
    while(temp1!=nullptr)
    {
        cout<<temp1->data<<" :";
        temp1=temp1->next;
    }
}