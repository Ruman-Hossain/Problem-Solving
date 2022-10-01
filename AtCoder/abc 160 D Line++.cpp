#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
    ll n,x,y;
    cin>>n>>x>>y;
    x--,y--;
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ll dist=min(abs(i-j),abs(x-i)+1+abs(y-j));
            dist=min(dist,abs(y-i)+1+abs(x-j));
            m[dist]++;
        }
    }
    for(ll i=1;i<n;i++){
        cout<<m[i]<<endl;
    }
 
    return 0;
}