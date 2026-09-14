#include<bits/stdc++.h>

using namespace std;

int maxx(int arr[], int n)
{
    int count=0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            if(count>max)
            max++;
        }
        else
        {
            count=0;
        }
    }
    cout<<"The maximum lenght of occurence of 1s in string is"<<" "<<max;

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

    maxx(arr, n);

    return 0;
}