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

int countloop(node* head)
{
    node* temp=head;
    unordered_set<node*> st;
    int count=0;
    node*trav=temp;
    while(temp!=nullptr)
    {

       if(st.find(temp) != st.end())
       {
            trav = temp;

                 do
                 {
                     count++;
                     trav = trav->next;

                } while(trav != temp);

    return count;
       }
       st.insert(temp);
       temp=temp->next;
    }

    return 0;

}
int main()
{   
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);
    node* sixth=new node(60);
    node* seventh=new node(70);
    node* head=first;
     first->next=second;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     fifth->next=sixth;
     sixth->next=seventh;
     seventh->next=third;

     int result=countloop(head);

     if(result!=0)
     {
        cout<<"Length of loop :"<<result;
     }
}
