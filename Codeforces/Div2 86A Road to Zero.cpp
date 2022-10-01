#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll x,y,t,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        ll cnt=0;
        while(x!=0 || y!=0){
            if(x==y){
                ll ds,ss;
                ll m=abs(x);
                ds=m*b;
                ss=2*m*a;
                ss<ds?cnt+=ss:cnt+=ds;
                x=0,y=0;

            }else if(x<y){
                ll m=y-x;
                y-=m;
                cnt+=m*a;
                //cout<<x<<" x<y "<<y<<endl;
            }else if(x>y){
                ll m=x-y;
                x-=m;
                cnt+=m*a;
                //cout<<x<<" x>y "<<y<<endl;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
