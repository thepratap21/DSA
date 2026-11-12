
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

node* detectCycleStart(node* head)
{
    unordered_set<node*> st;

    node* temp = head;

    while (temp != nullptr)
    {
        if (st.find(temp) != st.end())
        {
            return temp;
        }

        st.insert(temp);

        temp = temp->next;
    }

    return nullptr;
}

int main()
{
    node* head = new node(1);

    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(15);
    node* fifth = new node(4);
    node* sixth = new node(5);
    node* seventh = new node(6);
    node* eighth = new node(7);
    node* ninth = new node(8);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;

    ninth->next = fourth;

    node* result = detectCycleStart(head);

    if (result != nullptr)
    {
        cout << "Cycle detected!" << endl;
        cout << "Cycle starts at node: " << result->data << endl;
    }
    else
    {
        cout << "No cycle detected!" << endl;
    }

    return 0;
}
