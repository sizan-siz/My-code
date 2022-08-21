#include <stdio.h>
int main()
{
    float demandRate, setupCost, holdingCost, EOQ, TBO;
    printf("Enter the value of Demand Rate :\n");
    scanf("%f", &demandRate);
    printf("Enter the value of Setup Cost:\n");
    scanf("%f", &setupCost);
    printf("Enter the value of Holding Cost :\n");
    scanf("%f", &holdingCost);
    EOQ = sqrt((2 * demandRate * setupCost) / holdingCost);
    printf("The Economic Order Quantity = %f\n", EOQ);
    TBO = sqrt((2 * setupCost) / (demandRate * holdingCost));
    printf("The optimal Time Between Order = %f", TBO);
}