
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

node* getIntersectionNode(node* headA, node* headB)
{
    unordered_set<node*> st;

    node* tempA = headA;

    while (tempA != nullptr)
    {
        st.insert(tempA);
        tempA = tempA->next;
    }

    node* tempB = headB;

    while (tempB != nullptr)
    {
        if (st.find(tempB) != st.end())
        {
            return tempB;
        }

        tempB = tempB->next;
    }

    return nullptr;
}

void display(node* head)
{
    node* temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    node* headA = new node(4);
    headA->next = new node(1);

    node* headB = new node(5);
    headB->next = new node(6);
    headB->next->next = new node(1);

    node* common = new node(8);
    common->next = new node(4);
    common->next->next = new node(5);

    headA->next->next = common;
    headB->next->next->next = common;

    cout << "List A: ";
    display(headA);

    cout << "List B: ";
    display(headB);

    node* result = getIntersectionNode(headA, headB);

    if (result != nullptr)
    {
        cout << "Intersection found at node: "
             << result->data << endl;
    }
    else
    {
        cout << "No intersection found" << endl;
    }

    return 0;
}
