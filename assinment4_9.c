#include<stdio.h>
int main()
{
    char firstName[20],midName[20],lastName[20];
  printf("Enter  name:\n");
  scanf("%s%s%s",firstName,midName,lastName);

  printf("%s %.1s. %s\n",firstName,midName,lastName);
  printf("%.1s.%.1s. %s\n",firstName,midName,lastName);
  printf("%s%.1s.%.1s.\n",lastName,firstName,midName);
}