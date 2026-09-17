#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int low,int high,int k)
{   
    

      if(low>high)
      return -1;

     int mid=(low+high)/2;


        if(arr[mid]==k)
        return mid;

        else if(arr[mid]<k)
        return search(arr,n,mid+1,high,k);
    
        else
        return search(arr,n,low,mid-1,k);

}
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" "<<endl;
    for(auto &it:arr)
    cin>>it;
    cout<<endl;
    int k;
    cout<<"Enter the element you want to search"<<" ";
    cin>>k;
   int result= search(arr,n,0,n-1,k);
if(result !=-1)
cout<<"Element found at index"<< " "<<result;
else
cout<<"Element not found";
}