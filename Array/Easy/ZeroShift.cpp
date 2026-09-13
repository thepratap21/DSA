#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{ 
    int temp[n];
    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }


    while(j < n)
    {
        temp[j] = 0;
        j++;
    }

    cout << "Array after shifting 0s to end is" << endl;

    for(int i = 0; i < n; i++)
        cout << temp[i] << " ";

    return 0;
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for(auto &it : arr)
    {
        cin >> it;
    }

    cout << "The entered elements are" << endl;

    for(auto &it : arr)
    {
        cout << it << " ";
    }

    cout << endl;

    largest(arr, n);

    return 0;
}