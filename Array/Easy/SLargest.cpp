#include<bits/stdc++.h>
using namespace std;
int Sndlargest(int arr[],int n)
{ int lar=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>lar)
         lar=arr[i+1];
        
    }
int sl=-1;
for(int i=0;i<n;i++)
{
    if(arr[i]>sl && arr[i]!=lar)
    sl=arr[i];
}
cout<<"Second Largest element is"<<" "<<sl;
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements";
    for(auto &it : arr)
    {
        cin>>it;
    }
    cout<<"The entered elements are"<<endl;
    for(auto &it : arr)
    {
        cout<<it<<" ";
    }
Sndlargest(arr,n);
return 0;
}