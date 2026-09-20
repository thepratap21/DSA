#include<bits/stdc++.h>
using namespace std;
int leader(int arr[],int n)
{   cout<<"Leaders are"<< " ";
    for(int i=0;i<n;i++)
    {   int flag=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
            flag=0;
            break;
            }
        }
        if(flag==1)
        cout<<arr[i]<<" ";
        
    }

    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<endl;
    leader(arr,n);
}