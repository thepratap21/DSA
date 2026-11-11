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

bool findcycle(node* head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            return true;
        }

    }
    return false;
}
int main()
{
    node* head = new node(3);
    head->next = new node(2);
    head->next->next = new node(0);
    head->next->next->next = new node(-4);

    
    head->next->next->next->next = head->next;

    if (findcycle(head))
    {
        cout << "Cycle exists";
    }
    else
    {
        cout << "No cycle exists";
    }

    return 0;
}