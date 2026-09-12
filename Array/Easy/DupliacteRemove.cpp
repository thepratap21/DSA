#include<bits/stdc++.h>
using namespace std;
int Duplicate(int arr[],int n)
{  int nr[n];
    nr[0]=arr[0];
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(nr[j]!=arr[i])
        j++;
        nr[j]=arr[i];
    }
    cout<<"Array after removing dupliacte elements is"<<endl;
    for(int i=0;i<=j;i++)
    cout<<nr[i]<<" ";
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
Duplicate(arr,n);
return 0;
}