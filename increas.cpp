#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)

using namespace std;

int main(){
    long int x,cnt=0,cnt1;
    cin>>x;
    long int arr[x];

    REP(i,0,x){
        cin>>arr[i];
    }

    REP(i,0,x){
        if (arr[i]>arr[i+1]) {
            cnt+=(arr[i]-arr[i+1]);
            arr[i+1] = arr[i+1] + (arr[i] - arr[i+1]);
        }
    }
    cout<<cnt<<endl;
}