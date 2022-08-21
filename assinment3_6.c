#include<stdio.h>
int main()
{
    float depreciation,purchasePrice,SalvageValue;
  int year;
  printf("Enter the value of depreciation:\n");
  scanf("%f",&depreciation);
  printf("Enter the value of purchasePrice:\n");
  scanf("%f",&purchasePrice);
  printf("How many year:\n");
  scanf("%d",&year);
  SalvageValue=purchasePrice-(depreciation*year);
  printf("Salvage value is: %0.2f",SalvageValue);
}