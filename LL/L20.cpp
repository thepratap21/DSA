
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

bool detectCycle(node* head)
{
    unordered_set<node*> st;

    node* temp = head;

    while (temp != nullptr)
    {
        if (st.find(temp) != st.end())
        {
            return true;
        }

        st.insert(temp);

        temp = temp->next;
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

    if (detectCycle(head))
        cout << "Cycle exists";
    else
        cout << "No cycle exists";

    return 0;
}
