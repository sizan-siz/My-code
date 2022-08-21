#include<stdio.h>
#include<math.h>
int main()
{
     int number,n,mod;
   printf("Enter number:\n ");
   scanf("%d",&number);
    n=1+log10((int)number); //n=how many digit
    for(int i=n;i>=1;i--)
    {
        mod=10;
        for(int j=1;j<i;j++)
        {
            mod=mod*10; //first time mod=10 then every time increase 10 times.
        }
        
        printf("%d\n",number%mod);
    }
}