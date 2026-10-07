#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int n,int h)
{       
    int low=1;
    int high=50;
    int ans=-1;
    while(low<=high)
    {
        int k=(low + high)/2;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum +=ceil((double)arr[i]/k);
        }
        if(sum<=h)
        {
        ans=k;
        high=k-1;
        }
        else
        {
            low=k+1;
        }
    }
    cout << "The minimum value of integer k is " << ans;
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
    {
        cin>>it;
    }
    int h;
    cout<<"Enter hours "<<" ";
    cin>>h;
    find(arr,n,h);
}