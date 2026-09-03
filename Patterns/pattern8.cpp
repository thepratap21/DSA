#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N";
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=n-i;j>0;j--){
cout<<" ";
        }
for(int j=0;j<i*2-1;j++) {

           cout<<"*";

}
 for(int j=n-i;j>0;j--)
{
    cout<<" ";
}
cout<<endl;
   
    }
    
    return 0;
}