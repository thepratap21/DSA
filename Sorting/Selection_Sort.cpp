#include<bits/stdc++.h>
using namespace std;
int sortt(int arr[],int n)
{
for(int i=0; i<n-1; i++)
    {
        int min = i;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        swap(arr[i], arr[min]);
    }
return 0;
}
int main()
{
    int n;
    cout<<"Enter the no of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
   sortt(arr,n);
    cout<<"sorted array is "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}