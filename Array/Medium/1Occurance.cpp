#include<bits/stdc++.h>
using namespace std;
int occur(int arr[],int n)
{
    map<int , int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second==1)
        cout<<"Element occuring only once is"<<" "<<it.first;
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
