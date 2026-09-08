#include<bits/stdc++.h>
using namespace std;


void rec_bub_sort(int arr[], int n, int i)
{
    if(i == n-1)
        return;

    if(arr[i] > arr[i+1])
        swap(arr[i], arr[i+1]);

    rec_bub_sort(arr, n, i+1);
}


void bubble_sort(int arr[], int n)
{
    if(n == 1)
        return;

    rec_bub_sort(arr, n, 0);

    bubble_sort(arr, n-1);
}

int main()
{
    cout << "Enter the size of array: ";

    int n;
    cin >> n;

    cout << "Enter the array elements: ";

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    cout << "Sorted array is: " << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}