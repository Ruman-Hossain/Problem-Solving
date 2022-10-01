#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll cnt=0,pr=0;
        for(ll i=n-1;i>=0;i--){
            ll tmp=a[i]-cnt;
            tmp>=0?tmp=tmp:tmp=0;
            pr=(pr+tmp)%mod;
            cnt++;
        }
        cout<<pr<<endl;
    }
    return 0;
}
