#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,gcd=0;
    cout<<"Enter two numbers to find GCD";
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
          gcd=i;  
        }
    }
    cout<< " GCD of Two Numbers is"<<gcd;
}