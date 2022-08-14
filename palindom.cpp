#include<iostream>
using namespace std;
int main()
{
    int num,rem,palinnum=0,palindom;
    cout<<"Enter any number:\n";
    cin>>num;
    palindom=num;
    while (num!=0)
    {
        rem=num%10;
       palinnum=palinnum*10+rem;
        num/=10;
    }
    if(palinnum==palindom)
    {
        cout<<"palindom:\n";
    }
    else{
        cout<<"Not palindom:\n";
    }
    

}