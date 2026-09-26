#include<bits/stdc++.h>
using namespace std;
int find(int arr[],int n,int x)
{
   for(int i=0;i<n;i++)
   {
    if(arr[i]==x)
    {
    cout<<"Element found at index"<<" "<<i;
    return 1;
    }
   }
   return -1;

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
    cout<<"Enter element whose index is to be found";
    int x;
    cin>>x;

    int a=find(arr,n,x);
    if( a==-1)
    cout<<"Element not found"<<" ";
}