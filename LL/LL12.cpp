
#include <bits/stdc++.h>
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

node* addTwoNumbers(node* l1, node* l2)
{
    node* head = nullptr;
    node* tail = nullptr;

    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0)
    {
        int sum = carry;

        if (l1 != nullptr)
        {
            sum += l1->data;
            l1 = l1->next;
        }

        if (l2 != nullptr)
        {
            sum += l2->data;
            l2 = l2->next;
        }

        int digit = sum % 10;
        carry = sum / 10;

        node* newnode = new node(digit);

        if (head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    return head;
}

void display(node* head)
{
    node* temp = head;

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
    node* l1 = new node(2);
    l1->next = new node(4);
    l1->next->next = new node(3);

    node* l2 = new node(5);
    l2->next = new node(6);
    l2->next->next = new node(4);

    node* result = addTwoNumbers(l1, l2);

    cout << "Sum: ";
    display(result);

    return 0;
}
