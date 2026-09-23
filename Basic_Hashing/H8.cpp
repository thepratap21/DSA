#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter lenght of array"<<" ";
    int n;
    cin>>n;
    cout<<"Enter array elements"<<" ";
    int arr[n];
    for(auto &it:arr)
    cin>>it;

    int hash[256]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    int maxFreq=0;
    int lowFreq=0;
    for(int i=0;i<256;i++)
    {
        if(hash[i]>maxFreq)
        {
            maxFreq=hash[i];
        }
        else if(hash[i]>lowFreq && hash[i]<maxFreq)
        {
            lowFreq=hash[i];
        }
    }
    int sum=maxFreq+lowFreq;
    cout<<"Sum of lowest Frequency and highest Frequency is"<<" "<<sum;
}