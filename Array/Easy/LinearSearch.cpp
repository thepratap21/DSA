#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n,int a)
{  
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            cout<<"Element found at position"<<" "<<i<<endl;
            
        }
    }
    
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
    int a;
    cout<<endl;
    cout<<"Enter the element to know its availavility and position"<<endl;
    cin>>a;

largest(arr,n,a);
return 0;
}