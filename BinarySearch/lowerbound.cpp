#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n)
{   int k;
    cout<<"Enter the element whose lower bound you need to search"<<" ";
    cin>>k;
    int pos=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]<k)
        {
            pos++;
        }

    }
    cout<<"The index lower bound is"<<" "<<pos;
    
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" "<<endl;
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    cout<<endl;
    search(arr,n);
}