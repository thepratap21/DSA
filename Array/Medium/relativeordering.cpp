#include<bits/stdc++.h>
using namespace std;
int order(int arr[],int n)
{   
    int a1[n/2];
    int a2[n/2];
    int p=0;
    int q=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
        a1[p]=arr[i];
        p++;
        }
        else
        {
        a2[q]=arr[i];
        q++;
        }
    }
    int j = 0;

    for(int i = 0; i < n/2; i++)
    {
        arr[j] = a1[i];
        j++;

        arr[j] = a2[i];
        j++;
    }
    cout<<"The reorderd array is"<<" ";
    for(int i=0;i<n;i++)
    {
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
    order(arr,n);
}