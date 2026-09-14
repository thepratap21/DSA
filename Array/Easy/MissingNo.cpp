#include<bits/stdc++.h>
using namespace std;

int missing(int arr[], int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
}
int totalsum=0;
totalsum=((n+1)*(n+2))/2;
int miss=0;
miss=totalsum-sum;
cout<<"Missing No is"<<" ";
cout<<miss;

return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" ";
    for(auto &it:arr)
    {
        cin>>it;
    }
    missing(arr,n);
    return 0;

}