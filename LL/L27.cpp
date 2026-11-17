
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

    if(head1 == nullptr)
        return head2;

    if(head2 == nullptr)
        return head1;

    node* head3 = nullptr;
    node* tail = nullptr;

    while(temp1 != nullptr && temp2 != nullptr)
    {
        node* newnode;

        if(temp1->data <= temp2->data)
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

    // Add remaining nodes of list 1
    while(temp1 != nullptr)
    {
        node* newnode = new node(temp1->data);

        tail->next = newnode;
        tail = newnode;

        temp1 = temp1->next;
    }

    // Add remaining nodes of list 2
    while(temp2 != nullptr)
    {
        node* newnode = new node(temp2->data);

        tail->next = newnode;
        tail = newnode;

        temp2 = temp2->next;
    }

    return head3;
}

int main()
{
    // First sorted list: 1 -> 2 -> 4

    node* first = new node(1);
    node* second = new node(2);
    node* third = new node(4);

    node* head1 = first;

    first->next = second;
    second->next = third;

    // Second sorted list: 1 -> 3 -> 4

    node* fourth = new node(1);
    node* fifth = new node(3);
    node* sixth = new node(4);

    node* head2 = fourth;

    fourth->next = fifth;
    fifth->next = sixth;

    // Merge both lists

    node* result = merge(head1, head2);

    cout << "The merged list is: ";

    while(result != nullptr)
    {
        cout << result->data << " ";
        result = result->next;
    }

    return 0;
}
