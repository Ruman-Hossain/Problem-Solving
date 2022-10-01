#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main () {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t;
    while(cin>>t){
        ll a,b;
        for(ll i=0;i<t;i++){
            cin>>a>>b;
                if(a%b==0)cout<<"0"<<endl;
                else{
                    ll n=a/b;
                    n++;
                    n*=b;
                    cout<<n-a<<endl;
                }
        }
    }
    return 0;
}
