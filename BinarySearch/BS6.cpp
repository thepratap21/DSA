#include<bits/stdc++.h>
using namespace std;

int findMinimum(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while(low < high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    return arr[low];
}

int main()
{
    int n;

    cout<<"Enter array size ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements ";
    for(auto &it:arr)
        cin>>it;

    cout<<"Minimum element is "
        <<findMinimum(arr,n);
}