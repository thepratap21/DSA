#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n, int a1[], int j)
{
    if(n < 0)
        return;

    a1[j] = arr[n];

    reverseArray(arr, n-1, a1, j+1);
}

int main()
{
    cout<<"Enter the size of array ";
    int n;
    cin>>n;

    int arr[n];
    int a1[n];

    cout<<"Enter array elements ";

    for(auto &it:arr)
        cin>>it;

    reverseArray(arr, n-1, a1, 0);

    cout<<"Elements in reverse are ";

    for(int i=0;i<n;i++)
        cout<<a1[i]<<" ";
}