#include<bits/stdc++.h>
using namespace std;

int sorted(vector<int> &arr, int n)
{
    for(int i = 0; i < arr.size()-1; i++)
    {
        if(arr[i+1] == arr[i])
        {
            arr.erase(arr.begin() + i);
            i--;
        }
    }

    cout << endl;

    for(auto it : arr)
        cout << it << " ";

    return 0;
}

int main()
{
    cout << "Enter the size of vector: ";

    int n;
    cin >> n;

    cout << "Enter vector elements: ";

    vector<int> arr(n);

    for(auto &it : arr)
        cin >> it;

    cout << "Entered elements are: ";

    for(auto it : arr)
        cout << it << " ";

    sorted(arr, n);

    return 0;
}