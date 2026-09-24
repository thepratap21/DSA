#include<bits/stdc++.h>
using namespace std;
void rev(string s,int size)
{
    if(size==0)
    return;

    cout<<s[size-1];
    rev(s,size-1);
}
int main()
{
    string s;
    cout<<"Enter the string"<<" ";
    getline(cin,s);
    cout<<"The string in reverse is"<<" ";
    int size=s.size();
    rev(s,size);
}