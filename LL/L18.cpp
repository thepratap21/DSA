
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
    node* tempA = headA;
    node* tempB = headB;

    while (tempA != tempB)
    {
        if (tempA == nullptr)
            tempA = headB;
        else
            tempA = tempA->next;

        if (tempB == nullptr)
            tempB = headA;
        else
            tempB = tempB->next;
    }

    return tempA;
}

int main()
{
    // List A: 4 -> 1
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

    node* intersection = getIntersectionNode(headA, headB);

    if (intersection != nullptr)
        cout << "Intersection node: " << intersection->data;
    else
        cout << "No intersection";

    return 0;
}
