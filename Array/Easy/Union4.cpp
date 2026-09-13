#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& arr1, vector<int>& arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    int i = 0;
    int j = 0;

    vector<int> Union;

    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            if(Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);

            i++;
        }

        else if(arr2[j] < arr1[i])
        {
            if(Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);

            j++;
        }

        else
        {
            if(Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);

            i++;
            j++;
        }
    }

    while(i < n)
    {
        if(Union.empty() || Union.back() != arr1[i])
            Union.push_back(arr1[i]);

        i++;
    }

    while(j < m)
    {
        if(Union.empty() || Union.back() != arr2[j])
            Union.push_back(arr2[j]);

        j++;
    }

    return Union;
}

int main()
{
    int n, m;

    cout << "Enter size of array 1: ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter elements of array 1: ";
    for(auto &x : arr1)
        cin >> x;

    cout << "Enter size of array 2: ";
    cin >> m;

    vector<int> arr2(m);

    cout << "Enter elements of array 2: ";
    for(auto &x : arr2)
        cin >> x;

    vector<int> Union = findUnion(arr1, arr2);

    cout << "Union is: ";

    for(auto x : Union)
        cout << x << " ";

    return 0;
}