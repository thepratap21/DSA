#include<bits/stdc++.h>
using namespace std;
int occur(int arr[],int n)
{ 
    for(int i=0;i<n;i++)
    { int count=1;
        for(int j = 0; j < n; j++)
        {
            if(i != j && arr[i] == arr[j])
                count++;
        }
        if(count==1)
        cout<<"Element with one occurance is"<<" "<<arr[i];
    }
    return 0;

    
}
int main()
{
    int n;
    cout<<"Enter array size"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" ";
    for(auto &it:arr)
    cin>>it;
    occur(arr,n);
}
