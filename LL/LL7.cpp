
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
    int value, c;

    cout << "To enter data in LL, press 1: ";
    cin >> c;

    node* head = nullptr;
    node* tail = nullptr;

    while (c == 1)
    {
        cout << "Enter data to be inserted in LL: ";
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

        cout << "To enter more data press 1, or 0 to exit: ";
        cin >> c;
    }

    cout << "\nLL after insertion: ";

    node* temp = head;

    while (temp != nullptr)
    {
        cout << temp->data;

        if (temp->next != nullptr)
            cout << " : ";

        temp = temp->next;
    }

    cout << endl;

    int pos;

    cout << "Enter the position you want to delete: ";
    cin >> pos;

    if (pos < 1 || head == nullptr)
    {
        cout << "Invalid position or empty list!" << endl;
    }
    else if (pos == 1)
    {
        node* del = head;
        head = head->next;

        if (head == nullptr)
            tail = nullptr;

        delete del;
    }
    else
    {
        node* temp1 = head;
        int i = 1;

        while (i < pos - 1 && temp1 != nullptr)
        {
            temp1 = temp1->next;
            i++;
        }

        if (temp1 == nullptr || temp1->next == nullptr)
        {
            cout << "Invalid position!" << endl;
        }
        else
        {
            node* del = temp1->next;
            temp1->next = del->next;

            if (del == tail)
                tail = temp1;

            delete del;
        }
    }

    cout << "LL after deletion: ";

    node* temp2 = head;

    while (temp2 != nullptr)
    {
        cout << temp2->data;

        if (temp2->next != nullptr)
            cout << " : ";

        temp2 = temp2->next;
    }

    cout << endl;

    while (head != nullptr)
    {
        node* del = head;
        head = head->next;
        delete del;
    }

    return 0;
}
