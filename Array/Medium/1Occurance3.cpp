#include<bits/stdc++.h>
using namespace std;
int occur(int arr[],int n)
{  int maxelement=arr[0];
    for(int i=1;i<n;i++)
    {   if(arr[i]>maxelement)
        maxelement=arr[i];
    }

    int hash[maxelement+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[arr[i]]==1)
        cout<<"Element with one occurancr"<<" "<<arr[i];   
    }
    return 0;

    
}
int main()
{
    int n;
    cout<<"Enter array size"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" ";
    for(auto &it:arr)
    cin>>it;
    occur(arr,n);
}
