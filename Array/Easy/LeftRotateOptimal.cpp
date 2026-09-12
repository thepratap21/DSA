#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n,int a)
{ 
    reverse(arr,arr+a);
    reverse(arr+a,arr+n);
    reverse(arr,arr+n);
    
    cout <<"Array after rotation is"<<endl;

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
    cout<<"Enter the no of places you want to left rotate the array";
    int a;
    cin>>a;
    a=a%n;

    cout<<"The entered elements are"<<endl;
    for(auto &it : arr)
    {
        cout<<it<<" ";
    }
largest(arr,n,a);
return 0;
}




