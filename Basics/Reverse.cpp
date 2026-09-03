#include<bits\stdc++.h>
using namespace std;
int main()
{
    
    int n,cnt=0;
    int rev=0;
    cout<<"Enter No";
    cin>>n;
    while(n>0)
    {
    int a;
    a=n%10;
    n=n/10;
    rev=(rev*10)+a;
    }
    cout<<rev;
  
}