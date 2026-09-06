#include<bits/stdc++.h>
using namespace std;
int  main()
{
    cout<<"Enter the no of arrays";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    map<int ,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]+=1;
    }
    int q;
    cout<<"Enter the no of queries you want to run";

    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the no you want to find frequency of";
        cin>>number;
        cout<<"The number"<<number<<"appears"<<mpp[number]<<"times"<<endl;
    }
}