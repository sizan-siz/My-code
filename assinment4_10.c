#include<stdio.h>
int main()
{
    char name1[10], name2[10];
  int code1, code2;
  float price1, price2;

  printf("Enter first name ,code and price :\n");

  scanf("%s%d%f", name1, &code1, &price1);

  printf("Enter second name ,code and price :\n");

  scanf("%s%d%f", name2, &code2, &price2);

  printf("Name\tCode\tPrice\n");


  printf("%-s\t%-d\t%.2f\n", name1, code1, price1);

  printf("%-s\t%-d\t%.2f\n", name2, code2, price2);
}