#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=nullptr;

    }
};

int main()
{
    node* first=new node(1);
    node* second=new node(2);
    node* third=new node(3);
    node* fourth=new node(4);
    node* fifth=new node(5);
    node* sixth=new node(6);

    node* head=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    
    stack<int> st;
    
    node* temp = head;
    node* newHead = nullptr;
    node* tail = nullptr;
    int k=3;
    while(temp!=nullptr)
    {
        int count=0;
        while(temp!=nullptr && count<k)
        {
            st.push(temp->data);
            temp=temp->next;
            count++;
        }
         while(!st.empty())
        {
            node* newNode = new node(st.top());
            st.pop();

            if(newHead == nullptr)
            {
                newHead = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }
    }
 node* trav=newHead;
 while(trav!=nullptr)
 {
    cout<<trav->data<<" ";
    trav=trav->next;
 }

    


}