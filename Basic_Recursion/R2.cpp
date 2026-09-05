#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{
   
if(i>n)
return;
cout<<i<<endl;
    f(i+1,n);
}
int main()
{
    int n;
    cout<<"Enter the Number of times uptill that you want to print numbers ";
    cin>>n;
    f(1,n);
    return 0;
}