#include<bits/stdc++.h>
using namespace std;

int findFloorCeil(int arr[], int n, int x)
{
    int f = -1;
    int c = -1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            f = arr[i];
            c = arr[i];
            break;
        }

        if(arr[i] > x)
        {
            c = arr[i];

            if(i > 0)
                f = arr[i-1];

            break;
        }
    }

    cout << "Floor is " << f << " and Ceil is " << c;

    return 0;
}
int main()
{
    int n;

    cout<<"Enter array size ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements in sorted format ";
    for(auto &it:arr)
        cin>>it;

    cout<<"Enter element whose floor and ceil is to be found ";
    int x;
    cin>>x;

    findFloorCeil(arr,n,x);
}