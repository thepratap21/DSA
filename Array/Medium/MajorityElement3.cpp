#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n)
{
    int count = 0;
    int ele = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == ele)
        {
            count++;
        }
        else
        {
            count--;

            if(count == 0)
            {
                ele = arr[i];
                count = 1;
            }
        }
    }

    cout << "The Majority Element is " << ele;

    return 0;
}



int main()
{
    int n;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" "<<endl;
    for(auto &it:arr)
    cin>>it;
    cout<<endl;
    search(arr,n);
}