#include<bits/stdc++.h>
using namespace std;
int occur(int arr[],int n)
{  
    int sum=0;
    int k;
    int maxlen=0;
    cout<<"Enter the no you want to find substring with its sum"<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {   sum=0;
        for(int j=i;j<n-1;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
              maxlen=max(maxlen,j-i+1);
            }
        }
    }
        return maxlen;

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
   int out= occur(arr,n);
    cout<<"Maximum subarray is of length"<<" "<<out;
}
