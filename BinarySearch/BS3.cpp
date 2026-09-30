#include<bits/stdc++.h>
using namespace std;

int findFloorCeil(int arr[], int n, int x)
{
    
    int o=-1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
    int mid=(low + high)/2;

    if(arr[mid]==x)
    {
        o=mid;
        low=mid+1;
    }

    else if(arr[mid]<x)
    {
        low=mid + 1;
        
    }

    else
    {
        high=mid-1;
    }

    }
    cout << "last occurance is "<<" " << o ;

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

    cout<<"Enter element whose last occurance to be found ";
    int x;
    cin>>x;

    findFloorCeil(arr,n,x);
}