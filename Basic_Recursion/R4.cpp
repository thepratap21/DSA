#include<bits/stdc++.h>
using namespace std;
int f(int i,int n)
{ 
    int a;
if(i>n)
return 0 ;
 return i + f(i+1,n);
}
int main()
{
    int n;
    cout<<"Enter the Number to find the sum uptill ";
    cin>>n;
    int sum=f(0,n);
   cout<<sum;
    return 0;
}