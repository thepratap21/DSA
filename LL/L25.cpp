
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

node* rotate(node* head, int k)
{
    if(head == nullptr || head->next == nullptr)
    {
        return head;
    }

    int n = 0;
    node* temp = head;

    while(temp != nullptr)
    {
        n++;
        temp = temp->next;
    }

    k = k % n;

    while(k != 0)
    {
        node* temp = head;

        while(temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        node* last = temp->next;

        temp->next = nullptr;

        last->next = head;
        head = last;

        k--;
    }

    return head;
}

void printList(node* head)
{
    node* trav = head;

    while(trav != nullptr)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
}

int main()
{
    int k = 2;

    node* first = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);
    node* fifth = new node(5);
    node* sixth = new node(6);

    node* head = first;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Original list: ";
    printList(head);

    head = rotate(head, k);

    cout << "\nRotated list: ";
    printList(head);

    return 0;
}
