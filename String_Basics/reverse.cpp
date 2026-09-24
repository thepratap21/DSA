#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<" ";
    getline(cin,s);
    cout<<"The string in reverse is"<<" ";
    for(int i=s.size();i>=0;i--)
    {
        cout<<s[i];
    }
}