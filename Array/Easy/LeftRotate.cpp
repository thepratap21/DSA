#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n,int a)
{ 
    int ar[n];
    int j=0;
    for(int i=a;i<n;i++)
    {
        ar[j]=arr[i];
        j++;
    }
    for(int i=0;i<a;i++)
    {
        ar[j]=arr[i];
        j++;
    }
    cout<<"Array after rotation is"<<endl;
    for(auto i : ar)
    cout<<i<<" ";
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




