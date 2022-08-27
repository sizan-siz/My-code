
#include <iostream>
using namespace std;
int main()
{
  int n,i,s=0,s1=0,misingNum;
  int sum[n],sum1[n];
  cin>>n;
  for(i=0;i<n-1;i++)
  {
    cin>>sum1[i];
  }
   for(i=0;i<n-1;i++)
  {
    s1=s1+sum[i];
  }
  for(i=1;i<=n;i++)
  {
    s=s+sum[i];
  }
  misingNum=s-s1;
  cout<<misingNum;
  


}