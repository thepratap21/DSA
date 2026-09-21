#include<bits\stdc++.h>
using namespace std;
int sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    cout<<"Sum of array elements is"<<" "<<sum;
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
    sum(arr,n);
}
