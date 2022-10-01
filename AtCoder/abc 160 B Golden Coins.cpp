#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
    ll n;
    while(cin>>n){
        ll ans=0;
        if(n>=500){
            ans+=(n/500)*1000;
            n=n%500;
        }
        if(n>=5){
            ans+=(n/5)*5;
            n=n%5;
        }
        cout<<ans<<endl;
    }
    return 0;
}