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
            break;
        }
    }
    if(flag!=0 || num==1 || num==0)
    {
        cout<<num<<" is not prime number:\n";
    }
    else{
        cout<<num<<" is  a prime number:\n";
    }
}
