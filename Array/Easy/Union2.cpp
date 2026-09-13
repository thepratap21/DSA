#include<bits/stdc++.h>
using namespace std;

int union2(int arr1[], int arr2[], int n, int m)
{  
    map <int,int> mpp;
for(int i=0;i<n;i++)
{
    mpp[arr1[i]]=1;

}
for(int i=0;i<m;i++)
{
    mpp[arr2[i]]=1;
    
}
cout<<"Union of two arrays is"<<" ";
for(auto it:mpp)
{
    cout<<it.first<<" ";
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

    union2(arr1, arr2, n, m);

    return 0;
}