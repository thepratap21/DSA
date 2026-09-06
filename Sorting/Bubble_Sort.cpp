#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
     int n;
    cout<<"Enter the no of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    Bubble_Sort(arr,n);\
    cout<<"Sorted elements are"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}