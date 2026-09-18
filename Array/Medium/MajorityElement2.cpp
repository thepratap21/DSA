#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n)
{   
    for(int i=0;i<n;i++)
    { int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count>(n/2))
        {
        cout<<"The majority element is"<<" "<<arr[i];
        return 0;
        }
    }
    cout<<"No majority element";
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