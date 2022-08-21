#include<stdio.h>
int main()
{
    
 int num1,num2,n1,n2,s1,s2,add;
 printf("Enter first number:\n");
 scanf("%d",&num1);
 printf("Enter second number:\n");
 scanf("%d",&num2);
 printf("====================\n");
 n1=num2%10;
 n2=num2/10;
 s1=n1*num1;
 s2=n2*num1;
 //printf("%d",s2);
 add=s1+s2*10;
 printf("\t\t%d\n",num1);
 printf("\tx\t%d\n",num2);
 printf("\t____________\n");
 printf("\t%dx%d is  %d\t\t\t\n",num1,n1,s1);
 printf("\t%dx%d is %d\t\t\t\n",num1,n2,s2);
 printf("\t____________\t\t\t\n");
 printf("\t\t%d \n",add);
}