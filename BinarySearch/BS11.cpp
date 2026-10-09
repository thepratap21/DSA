#include<bits/stdc++.h>
using namespace std;
int maxx(int arr[],int n)
{
    int low=0;
    int high=n-1;
    int low1=0;
    int high1=n-1;
    int mid1=0;
    int mid2=0;
    while(low<=high)
    {
        mid1=(low + high)/2;
        if(arr[mid1]>arr[mid1-1] && arr[mid1]>arr[mid1+1])
        {
            return mid1;
        }
        else
        {
            high=mid1-1;
        }
    }
    while(low1<=high1)
    {
        mid2=(low1 + high1)/2;
        if(arr[mid2]>arr[mid2-1] && arr[mid2]>arr[mid2+1])
        {
            return mid2;
        }
        else
        {
          low1=mid1+1;
        }
    }
    return 0;

}
int main()
{
    int n;
    cout<<"Enter size of array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" ";
    for(auto &it:arr)
    cin>>it;

    int ans=maxx(arr,n);
    cout<<"The element position is"<<" "<<ans;
}