#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the No";
cin>>n;
int org=n;
int count=0,sum=0,rem,a;
while(n>0)
{
    rem =n%10;
    count+=1;
    n=n/10;
}
n=org;
while(n>0)
{
    a=n%10;
    rem=pow(a,count);
    sum=sum+rem;
    n=n/10;

}
if(sum==org){
    cout<<"The sum of No is ->"<<sum<<"And the entered No is"<<org<<"Therefore the No is Armstrong";
}
else 
    cout<<"The sum of No is ->"<<sum<<"And the entered No is"<<org<<"Therefore the No is not Armstrong";
}