#include<bits/stdc++.h>
using namespace std;
int stock(int arr[],int n)
{   
    int min=arr[1];
    int max=0;
    int posmin=1;
    int pos=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]<min)
        {
        min=arr[i];
        posmin=i;
        }
    }
    if(posmin<n)
    {   max=arr[posmin+1];
        for(int i=posmin+1;i<=n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                pos=i;
            }
        }
        cout<<"Sell stocks on day"<<" "<<pos;
        return 0;
    }
    cout<<"Do not buy Stocks";

    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" "<<endl;
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    cout<<endl;
    stock(arr,n);
}