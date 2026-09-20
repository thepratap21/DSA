#include<bits/stdc++.h>
using namespace std;
int stock(int arr1[],int arr2[],int n,int m)
{   
    int uniona[20];
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j])
            {
                uniona[c]=arr1[i];
                c++;
                
            }
        }
    }
    cout<<"The intersection of two arrays is"<<" ";
    for(int i=0;i<c;i++)
    cout<<uniona[i]<<" ";
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array1"<<" ";
    cin>>n;
    int arr1[n];
    cout<<"Enter array elements"<<" "<<endl;
    for(auto &it:arr1)
    cin>>it;
    int m;
    cout<<"Enter the size of array2"<<" ";
    cin>>m;
    int arr2[m];
    for(auto &it:arr2)
    cin>>it;
    cout<<endl;
    stock(arr1,arr2,n,m);
}