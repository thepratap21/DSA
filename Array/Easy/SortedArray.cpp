#include<bits/stdc++.h>
using namespace std;
int sorted(int arr[],int n)
{
for(int i=0; i<n-1;i++)
{
    if(arr[i+1]>arr[i])
    {
    continue;
    }
    else
    {   cout<<endl;
        cout<<"The array is not sorted";
        return 0;
    }
}
cout<<endl;
cout<<"The array is sorted";

return 0;
}
int main()
{
    cout<<"Enter the size of array";
    int n;
    cin>>n;
    cout<<"Enter array elements";
    int arr[n];
    for(auto &it :arr)
    cin>>it;
    cout<<"Entered elements are"<<" ";
    for(auto &it :arr)
    cout<<it<<" ";
sorted(arr,n);
return 0;

}