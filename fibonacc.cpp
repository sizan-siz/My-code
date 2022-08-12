#include<iostream>
using namespace std;
int main()
{
    int a,b,n,sum;
   
    cout<<"Enter the value of n:\n";
    cin>>n;
    a=0;
    b=1;
     
   for(int i=0;i<n;i++)
   {
    cout<<a<<" ";
    sum=a+b;
    a=b;
    b=sum;
   }
}