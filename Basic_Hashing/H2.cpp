#include<bits/stdc++.h>
using namespace std;
int  main()
{
string s;
cout<<"Enter the string";
cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']+=1;
    }
    int q;
       cout<<"Enter the no of queries";
 
    cin>>q; 
    while(q--){
        char c;
     cout<<"Enter the character"<<endl;
        cin>>c;
        cout<<"The Character "<< c <<" "<<"appears"<<" "<<hash[c-'a']<<"times"<<endl;
    }
}