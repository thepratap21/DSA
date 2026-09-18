#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n)
{   
    int hash[n]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    int lar=hash[0];
    int element=0;
    for(int i=1;i<n;i++)
    {
        if(hash[i]>lar)
        {
        lar=hash[i];
        element=i;
        }
    }
    cout<<"The majority element is"<< " "<<element;
    
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