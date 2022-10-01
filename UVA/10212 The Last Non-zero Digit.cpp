#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,m;
    while(cin>>n>>m){
        ll rslt=1;
        while(m--){
            rslt*=n--;
            while(!(rslt%10))
                rslt/=10;
            rslt %= 1000000000;
        }
        cout<<rslt%10<<endl;
    }
    return 0;
}
