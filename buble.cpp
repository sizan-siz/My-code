#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    printf("How many data:\n");
    scanf("%d", &n);
    printf("Enter Data:\n");
   int index[n];
    for ( i =0;i<n; i++)
    {
        
        cin>>index[i];
    }
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n-1;j++)
        {
            if (index[j] > index[j + 1])
                swap(index[j], index[j + 1]);
        }

    }
    for(i=0;i<n;i++)
    {
      cout<<index[i]<<"\t";
    }
}