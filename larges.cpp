#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many element of this array:\n";
    cin>>n;
    int array[n];
    cout<<"Enter Element of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"===Your array Element==\n";
     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
   for(int i=0;i<n;i++)
   {
    if(array[0]<array[i])
    array[0]=array[i];
   }
   cout<<"===Your largest array Element==\n";
    cout<<array[0]<<endl;



}