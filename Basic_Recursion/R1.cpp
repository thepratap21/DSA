#include<bits/stdc++.h>
using namespace std;
void f(int n)
{
   
    if(n==0)
    return;

    cout<<"Abhay"<<endl;

    f(n-1);
}
int main()
{
    int n;
    cout<<"Enter the Number of times for which you want to print name ";
    cin>>n;
    f(n);
    return 0;
}