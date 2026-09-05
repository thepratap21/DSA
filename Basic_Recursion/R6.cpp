#include<bits/stdc++.h>
using namespace std;

void f(int i,int arr[],int n,int j)
{
    if(i>=j)
    return;
    else
    swap(arr[i],arr[j]);
    f(i+1,arr,n,j-1);
}
int main()
{ 
    int n;
    cout<<"Enter the Nummber for array";
cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    f(0,arr,n,n-1);
    cout<<"Reversed Array is";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
