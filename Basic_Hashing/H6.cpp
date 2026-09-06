#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the string";
    string s;
    cin>>s;
    map<char,int> mpp;
    for(int i=0;i<s.size();i++)
    {
        mpp[s[i]]++;
    }

    cout<<"Enter the no of queries you want to run";
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cout<<"Enter the charater whose frequency you want to know";
        cin>>c;
        cout<<"The character"<<" "<<c<<" " <<"appears"<<" " <<mpp[c]<<" " <<"times"<<endl;
    }

}