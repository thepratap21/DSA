#include<bits/stdc++.h>
using namespace std;
struct node
{
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
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);

    node* head=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

cout<<"Enter the data that you want to search"<<" ";
int d;
cin>>d;
node* temp=head;
bool found=false;
while(temp!=nullptr)
{
if(temp->data==d)
{
found=true;
break;
}
else
temp=temp->next;
}
if(found)
cout<<"True";
else
cout<<"False";
return 0;
}
