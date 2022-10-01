#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long chck(int n){
    if(n==0) return 0;
    long long rslt = 0;
    int i,r = (int)floor(sqrt(n));

    if(r*r==n){
        rslt += n/r;
        --r;
    }

    for(i = 1;i<=r;++i){
        rslt += n/i;
        rslt += max(0,n/i-r);
    }

    return rslt;
}
int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<chck(n)<<endl;
    }
    return 0;
}
