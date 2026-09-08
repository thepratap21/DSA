#include<bits/stdc++.h>
using namespace std;

void rec(int arr[], int n,int i)
{
    if(i>=n)
    return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);
        j--;
    }
    rec(arr,n,i+1);
}


int main()
{
    int n;
    cout<<"Enter the no of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
   rec(arr,n,1);
    cout<<"sorted array is "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}