#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int n,int h)
{       int k=1;

    while(true)
{
    int hour = 0;

    for(int i = 0; i < n; i++)
    {
        hour += ceil((double)arr[i] / k);
    }

    if(hour <= h)
    {
        cout << "The minimum value of integer is " << k;
        return k;
    }

    k++;
}
}
int main()
{
    int n;
    cout<<"Enter array size"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" ";
    for(auto &it:arr)
    {
        cin>>it;
    }
    int h;
    cout<<"Enter hours "<<" ";
    cin>>h;
    find(arr,n,h);
}