#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rev=0;
    cout<< " Enter No to check palindrome";
    cin>>n;
    int original=n;
    int a;
    while(n>0)
    {
    a=n%10;
    rev=(rev*10)+a;
    n=n/10;
    }
    cout<<"The reverse of No is"<<" "<<rev<<endl;
    if(rev==original)
    {
        cout<<"Yes,the no is Palindrome";
    }
    else
    {
    cout<<"No, the No is not Palindrome";
    }
}