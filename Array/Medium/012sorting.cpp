#include<bits/stdc++.h>
using namespace std;

int sortt(int arr[], int n)
{
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        cnt1++;
        else if(arr[i]==1)
        cnt2++;
        else
        cnt3++;
    }
    for(int i=0;i<cnt1;i++)
    {
    arr[i]=0;
    }
    for(int i=cnt1;i<cnt1+cnt2;i++)
    {
    arr[i]=1;
    }
    for(int i=cnt1+cnt2;i<n;i++)
    
    {
        arr[i]=2;
    }
cout<<"Sorted 0s, 1s, 2s are"<<" ";
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
    return 0;
}



int main()
{
    int n;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" "<<endl;
    for(auto &it:arr)
    cin>>it;
    cout<<endl;
    sortt(arr,n);
}