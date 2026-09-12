#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n)
{ 
   int temp=arr[0];
   for(int i=1;i<n;i++)
   {
    arr[i-1]=arr[i];
   }
   arr[n-1]=temp;
  cout<<"Array after rotation"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements";
    for(auto &it : arr)
    {
        cin>>it;
    }


    cout<<"The entered elements are"<<endl;
    for(auto &it : arr)
    {
        cout<<it<<" ";
    }
largest(arr,n);
return 0;
}