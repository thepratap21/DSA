#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int value)
    {
        data=value;
        next=nullptr;
    }
};
 int main()
 {
    Node* First=new Node(10);
    Node* Second=new Node(20);
    Node* Third=new Node(30);

    Node* head=First;
    head->next=Second;
    Second->next=Third;
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" :";
        temp=temp->next;
    }



 }