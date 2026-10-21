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

node* separate( node* head)
{   
    node* trav=head;
    node* head2=nullptr;
    node* tail2=nullptr;

    while(trav!=nullptr)
    {
        if(trav->data%2==0)
        {
            node* newnode=new node(trav->data);
            if(head2==nullptr)
            {
                head2=newnode;
                tail2=newnode;
            }
            else{
                tail2->next=newnode;
                tail2=newnode;
            }
            
        }
        trav=trav->next;

    }
    trav=head;

    while(trav!=nullptr)
    {
        if(trav->data%2 !=0)
        {
            node* newnode=new node(trav->data);
            if(head2==nullptr)
            {
                head2=newnode;
                tail2=newnode;
            }
            else
            {
                tail2->next=newnode;
                tail2=newnode;
            }
        }
        
        trav=trav->next;
    }
     
    return head2;

}

void display(node* head2)
{
    node* temp = head2;

    while (temp != nullptr)
    {
        cout << temp->data;

        if (temp->next != nullptr)
            cout << " -> ";

        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    node* L1=new node(1);
    L1->next=new node(2);
    L1->next->next=new node(3);
    L1->next->next->next=new node(4);
    L1->next->next->next->next=new node(5);

    
    node* result=separate(L1);
    cout<<"After separation of add and even nodes :"<<" "<<endl;
    display(result);
}