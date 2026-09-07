#include<bits/stdc++.h>
using namespace std;
void insert_sort(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
    int j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);
        j--;
    }
 }
}
int main()
{
    int n;
    cout<<"Enter array size";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insert_sort(arr,n);
    cout<<"elements in sorted order are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}