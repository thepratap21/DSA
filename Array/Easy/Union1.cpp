#include<bits/stdc++.h>
using namespace std;

int union1(int arr1[], int arr2[], int n, int m)
{  
    int newarr[100];

    int j = 0;

    
    for(int i = 0; i < n; i++)
    {
        newarr[j] = arr1[i];
        j++;
    }

    for(int i = 0; i < m; i++)
    {
        newarr[j] = arr2[i];
        j++;
    }

    sort(newarr, newarr + j);

    cout << "Union of arrays is: ";

    for(int i = 0; i < j; i++)
    {
        if(i == 0 || newarr[i] != newarr[i-1])
        {
            cout << newarr[i] << " ";
        }
    }

    return 0;
}

int main()
{
    int n;

    cout << "Enter the size of array 1: ";
    cin >> n;

    int arr1[n];

    cout << "Enter array elements: ";

    for(auto &it : arr1)
    {
        cin >> it;
    }

    int m;

    cout << "Enter the size of array 2: ";
    cin >> m;

    int arr2[m];

    cout << "Enter array elements: ";

    for(auto &it : arr2)
    {
        cin >> it;
    }

    union1(arr1, arr2, n, m);

    return 0;
}