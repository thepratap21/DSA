#include<bits/stdc++.h>
using namespace std;
int Secondlargest(int arr[],int n)
{ 
sort(arr,arr+n);
cout<<"Second Largest element is"<<" "<<arr[n-2];
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
Secondlargest(arr,n);
return 0;
}