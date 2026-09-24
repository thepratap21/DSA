#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n, int i, int summ)
{
    if(i == n)
        return summ;
     
    summ = summ + arr[i];

    return sum(arr, n, i + 1, summ);
}

int main()
{
    int n;

    cout << "Enter the size of array ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements ";
    for(auto &it : arr)
        cin >> it;

    cout << "Sum = " << sum(arr, n, 0, 0);

    return 0;
}