#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"Enter your number:\n";
    cin>>num;
    for(i=2;i<=num;i++)
    {
        for( j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<j<<endl;
            j++;
        }
    }
}
