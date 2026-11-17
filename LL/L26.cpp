
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int value)
    {
        data = value;
        next = nullptr;
    }
};

node* merge(node* head1, node* head2)
{
    node* temp1 = head1;
    node* temp2 = head2;

    node* head3 = nullptr;
    node* tail = nullptr;

    while(temp1 != nullptr || temp2 != nullptr)
    {
        node* newnode = nullptr;

        
        if(temp1 == nullptr)
        {
            newnode = new node(temp2->data);
            temp2 = temp2->next;
        }

        
        else if(temp2 == nullptr)
        {
            newnode = new node(temp1->data);
            temp1 = temp1->next;
        }

        
        else if(temp1->data <= temp2->data)
        {
            newnode = new node(temp1->data);
            temp1 = temp1->next;
        }

        else
        {
            newnode = new node(temp2->data);
            temp2 = temp2->next;
        }

        
        if(head3 == nullptr)
        {
            head3 = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    return head3;
}

int main()
{
    

    node* first = new node(1);
    node* second = new node(2);
    node* third = new node(4);

    node* head1 = first;

    first->next = second;
    second->next = third;

    

    node* fourth = new node(1);
    node* fifth = new node(3);
    node* sixth = new node(4);

    node* head2 = fourth;

    fourth->next = fifth;
    fifth->next = sixth;

    
    node* result = merge(head1, head2);

    cout << "Merged Linked List: ";

    while(result != nullptr)
    {
        cout << result->data << " ";
        result = result->next;
    }

    return 0;
}
