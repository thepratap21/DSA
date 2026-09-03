#include<bits\stdc++.h>
using namespace std;
int main()
{
    int counter=0;
    int n;
    cout<<"Enter No";
    cin>>n;
    while(n>0)
    {
    int a;
    a=n%10;
    counter+=1;
    n=n/10;
    }
    cout<<counter;
}