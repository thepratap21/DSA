#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N";
    cin>>n;
    for(int i=1;i<=n/2;i++)

    {
       for(int j=0;j<i;j++)
       {
        cout<<"*";
       }
       
       cout<<endl;
    }
    for(int i=n/2-1;i>0;i--)

    {
       for(int j=0;j<i;j++)
       {
        cout<<"*";
       }
       
       cout<<endl;
    }

    return 0;
}