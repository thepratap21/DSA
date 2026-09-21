#include<bits\stdc++.h>
using namespace std;
int count(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        count++;
    }

    cout<<"Count of odd elements is"<<" "<<count;
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
    count(arr,n);
}
