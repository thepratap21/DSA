#include<bits/stdc++.h>
using namespace std;
int primee(int n,int i)
{
    while(i<=n/2)
    {
        if(n%i==0)
        return -1;
        return primee(n,i+1);
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the no to check its primality"<<" ";
    cin>>n;
    int a=primee(n,2);
    if(a==-1)
    cout<<"No is not prime";
    else
    cout<<"No is prime";
}