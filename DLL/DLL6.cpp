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
    node* head=nullptr;
    node* tail=nullptr;

    cout<<"To enter data in DLL, press 1"<<" ";
    int c;
    cin>>c;
    int value;

    while(c==1)
    {   cout<<"Enter value to be inserted"<<" ";
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
            newnode->prev=tail;
            tail=newnode;
        }
        cout<<"To enter more data press 1, to exit press 0"<<" ";
        cin>>c;

    }
    cout<<"Current DLL is"<<" ";
    node* t=head;
    while(t!=nullptr)
    {
        cout<<t->data<<" : ";
        t=t->next;
    }
    cout<<"To insert data at a position of the DLL, press 2"<<" ";
    int a;
    cin>>a;
   
if(a == 2)
{
    int pos;
    cout << "Enter position at which you want to insert: ";
    cin >> pos;

    cout << "Enter value to be inserted: ";
    cin >> value;

    if(pos < 1)
    {
        cout << "Invalid position";
    }
    else
    {
        node* newnode = new node(value);

        if(pos == 1)
        {
            newnode->next = head;

            if(head != nullptr)
                head->prev = newnode;

            head = newnode;

            if(tail == nullptr)
                tail = newnode;
        }
        else
        {
            node* trav = head;
            int p = 1;

            while(trav != nullptr && p < pos - 1)
            {
                trav = trav->next;
                p++;
            }

            if(trav == nullptr)
            {
                cout << "Invalid position";
                delete newnode;
            }
            else
            {
                newnode->next = trav->next;
                newnode->prev = trav;

                if(trav->next != nullptr)
                    trav->next->prev = newnode;
                else
                    tail = newnode;

                trav->next = newnode;
            }
        }
    }
}

     node* temp=head;
     
     while(temp!=nullptr)
     {
        cout<<temp->data<<" : ";
        temp=temp->next;;
     } 
}