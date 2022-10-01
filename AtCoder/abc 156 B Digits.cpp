#include <bits/stdc++.h>
using namespace std;
#define ll long long
void base(ll n,ll b){
    ll cnt=0;
    while(n>0){
        n/=b;
        cnt++;
    }
    cout<<cnt<<endl;
}
void convert(ll n,ll b,ll mx){
    ll t=0,r;
    ll p=0;
    while(n>0){
        r=n%b;
        t+=r*(pow(mx+1,p++));
        n/=b;
    }
    base(t,b);
}
 
void check(ll n,ll b){
    ll t=n,r;
    int mx=0;
    while(n>0){
        r=n%b;
        if(mx<r)mx=r;
        n/=b;
    }
    if(mx==1)base(t,b);
    else convert(t,b,mx);
}
int main() {
    ll n,b;
    while(cin>>n>>b){
        check(n,b);
    }
	return 0;
}