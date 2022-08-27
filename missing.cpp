#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num,num1[n],sum=0,s=0,mn,i;
    for(i=0;i<n-1;i++)
    {
        cin>>num1[i];
    }
     for(i=0;i<n-1;i++)
    {
        s=s+num1[i];
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    mn=sum-s;
    cout<<mn;



}