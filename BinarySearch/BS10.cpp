#include<bits/stdc++.h>
using namespace std;

int sol(vector<int> &arr, int n, int d)
{
    int low = *max_element(arr.begin(), arr.end());

    int sum = 0;

    for(auto &it : arr)
    {
        sum += it;
    }

    int high = sum;
    int ans = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        int summ = 0;
        int days = 1;

        for(int i = 0; i < n; i++)
        {
            if(summ + arr[i] <= mid)
            {
                summ += arr[i];
            }
            else
            {
                days++;
                summ = arr[i];
            }
        }

        if(days <= d)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "The minimum capacity is " << ans;

    return 0;
}

int main()
{
    int n;
    cout<<"enter array size"<<" ";
    cin>>n;
    vector <int> arr(n);
    cout<<"enter conveyer belt weights"<<" ";
    for(auto  &it:arr)
    cin>>it;
    int d;
    cout<<"Enter no of days"<<" ";
    cin>>d;
    sol(arr,n,d);
}