#include<bits/stdc++.h>
using  namespace std;
void rec_bub_sort(int arr[],int n,int i)
{
if(i>=n-1)
return; //Base condition hai ye

    int j=i;
    while(j<n-1)
    {
    if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);
    j++;
}
rec_bub_sort(arr,n,i+1);
return;
}
int main()
{
    cout<<"Enter the size of array";
    int n;
    cin>>n;
    cout<<"Enter the array elements";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rec_bub_sort(arr,n,0);

    cout<<"Sorted array is"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
// This recursive approach is only calling outer loop by recursion not inner loop 