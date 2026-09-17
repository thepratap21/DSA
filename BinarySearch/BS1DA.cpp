#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n)
{   int k;
    cout<<"Enter the element you want to search"<<" ";
    cin>>k;
    int low=0;
    int high=n-1;
    while(low<=high)

    {   int mid=(low+high)/2;

        if(arr[mid]==k)
        {
        cout<<"The element is present at position"<<" "<<mid;
        return 0;
        }
        else if(arr[mid]<k)
        low=mid+1;
    
        else if(arr[mid]>k)
        high=mid-1;

        else
        cout<<"Element not Found";

    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" "<<endl;
    for(auto &it:arr)
    cin>>it;
    cout<<endl;
    search(arr,n);
}