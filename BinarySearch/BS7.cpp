#include<bits/stdc++.h>
using namespace std;
int root(int n)
{
    int low=1;
    int high=n;
    int ans=0;
    while(low<=high)
    {
    int mid=(low+high)/2;
 if(mid*mid==n){
    return mid;

 }
 else if(mid*mid<n)
 {
    ans=mid;
    low=mid+1;
 }
 else{
    high=mid-1;
 }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number you want to find square root of"<<" ";
    cin>>n;
    cout<<"The square root/floor value of nearest integer is"<<" "<<root(n);
}