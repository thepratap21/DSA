#include<bits/stdc++.h>

using namespace std;

int missing(int arr[], int n)
{
    int a = 1;

    while(a <= n + 1)
    {
        bool found = false;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == a)
            {
                found = true;
                break;
            }
        }

        if(found == false)
        {
            cout << "Missing No is " << a;
            return 0;
        }

        a++;
    }

    return 0;
}

int main()
{
    int n;

    cout << "Enter the size of array ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements ";

    for(auto &it : arr)
    {
        cin >> it;
    }

    missing(arr, n);

    return 0;
}