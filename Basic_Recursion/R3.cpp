#include<bits/stdc++.h>
using namespace std;
void f(int n)
{ 
if(n==0)
return;
else
{
cout<<n<<endl;
}
    f(n-1);
}
int main()
{
    int n;
    cout<<"Enter the Number of times uptill that you want to print numbers in reverse ";
    cin>>n;
    f(n);
    return 0;
}