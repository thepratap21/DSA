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
    int maxElement=-1;
    int maxFreq=0;
    int secondmaxElement=-1;
    int secondmaxFreq=0;
    for(int i=0;i<256;i++)
    {
      if(hash[i] > maxFreq)
{
    secondmaxFreq = maxFreq;
    secondmaxElement = maxElement;

    maxFreq = hash[i];
    maxElement = i;
}
      else if(hash[i] > secondmaxFreq && hash[i] != maxFreq)
    {
        secondmaxFreq = hash[i];
        secondmaxElement = i;
    }
    }
    cout<<"Second Highest occuring element is"<<" "<<secondmaxElement<<" " <<"and its frequency is"<<" "<<secondmaxFreq;
return 0;
}