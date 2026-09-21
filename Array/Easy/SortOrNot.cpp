
#include<bits\stdc++.h>
using namespace std;
int sortt(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
         return -1;
    }
    cout<<"The array is sorted";
    return 0;
}
int main()
{
    int n;
    cout<<"Enter array size"<<" ";
    cin>>n;
    cout<<"Enter array elements"<<" ";
    int arr[n];
    for(auto &it:arr)
    {
        cin>>it;
    }
    int result=sortt(arr,n);
    if(result==-1)
    cout<<"The array is not sorted";
}
