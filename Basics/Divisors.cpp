#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no whose divisors you want to find"<<" ";
    cin>>n;
    int arr[20];
    int j=0;
    for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
      arr[j]=i;
      j++;
      }
    }
    cout<<"The divisors are"<<" ";
    for(int i=0;i<j;i++)
    cout<<arr[i]<<" ";
}