#include<bits/stdc++.h>
using namespace std;
int sum(int n, int summ)
{   if(n==0)
    return summ;

    int rem=n%10;
    summ+=rem;
    n=n/10;
    return sum(n,summ);
}
int main()
{
    cout<<"Enter the No"<<" ";
    int n;
    cin>>n;
    cout<<"Sum is"<<" ";
    cout<<sum(n,0);
}