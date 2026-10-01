#include<bits/stdc++.h>
using namespace std;

int findFloorCeil(int arr[], int n, int x)
{
   int low=0;
   int high=n-1;

   while(low<=high)
   {
       int mid=(low + high)/2;

    if(arr[mid]==x)
    {
        cout<<"Element is at index"<<" "<<mid;
    }
    if(arr[low]<=arr[mid])
    {
        if(arr[low]<=x && x<arr[mid])
        high=mid-1;
        else   
        low=mid+1;
    }
    else{
        if(arr[mid]<x && x<=arr[high])
        low=mid+1;
        else
        high=mid-1;
    }

   }
   
    return 0;
}
int main()
{
    int n;

    cout<<"Enter array size ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements in sorted format ";
    for(auto &it:arr)
        cin>>it;

    cout<<"Enter element whose  occurance to be found ";
    int x;
    cin>>x;

    findFloorCeil(arr,n,x);
}