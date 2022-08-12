#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,flag=0;
    cout<<"Enter a number:\n";
    cin>>num;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag++;
        }
    }
    if(flag==0)
    {
        cout<<num<<" is a prime number:\n";
    }
    else{
        cout<<num<<" is not a prime number:\n";
    }
}