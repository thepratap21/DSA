#include<bits/stdc++.h>
using namespace std;

int findFloorCeil(int arr[], int n, int x)
{
    int floor=-1;
    int ceil=-1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
    int mid=(low + high)/2;

    if(arr[mid]==x)
    {
        floor=arr[mid];
        ceil=arr[mid];
        break;
    }

    if(arr[mid]>x)
    {
        ceil=arr[mid];
        high=mid-1;
        
    }

    if(arr[mid]<x)
    {
        floor=arr[mid];
        low=mid+1;
    }

    }
    cout << "Floor is " << floor << " and Ceil is " << ceil;

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

    cout<<"Enter element whose floor and ceil is to be found ";
    int x;
    cin>>x;

    findFloorCeil(arr,n,x);
}