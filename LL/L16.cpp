
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

int main()
{
    node* head = nullptr;
    node* tail = nullptr;

    cout << "Enter 1 to add data to LL: ";
    int n;
    cin >> n;

    int value;

    while (n == 1)
    {
        cout << "Enter value to insert in LL: ";
        cin >> value;

        node* newnode = new node(value);

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

        cout << "To enter more data press 1: ";
        cin >> n;
    }

    cout << "Original LL: ";

    node* temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    stack<int> st;

    node* trav = head;

    while (trav != nullptr)
    {
        st.push(trav->data);
        trav = trav->next;
    }

    node* temp1 = head;
    bool palindrome = true;

    while (temp1 != nullptr)
    {
        int p = st.top();
        st.pop();

        if (p != temp1->data)
        {
            palindrome = false;
            break;
        }

        temp1 = temp1->next;
    }

    if (palindrome)
    {
        cout << "Linked List is a Palindrome";
    }
    else
    {
        cout << "Linked List is NOT a Palindrome";
    }

    return 0;
}
