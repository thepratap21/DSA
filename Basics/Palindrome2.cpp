#include<bits/stdc++.h>
using namespace std;
void palindrome(int n)
{
    string s = to_string(n);
    int i=0;
    while(i<s.size()/2)
    { 
    if(s[i]!=s[s.size()-i-1])
    {
    cout<<"Not Palindrome";
    return;
    }
    
     i++;
    }
    cout<<"Palindrome";
   
}

int main()
{
    int n;
    cout<<"Enter no to check palindrome";
    cin>>n;
    palindrome(n);
     
}