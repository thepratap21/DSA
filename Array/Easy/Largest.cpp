#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n)
{ int lar=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>lar)
         lar=arr[i+1];
        
    }
    cout<<"Largest element is "<<" "<<lar<<endl;
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