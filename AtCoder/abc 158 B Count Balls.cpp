#include <bits/stdc++.h>
using namespace std;
const unsigned int MOD = 1000000007;
#define ll long long
#define PI 3.1416
string day[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b;
    while(cin>>n>>a>>b){
        ll rslt=n/(a+b)*a;
        ll r=n%(a+b);
        cout<<rslt+min(r,a)<<endl;
    }
    return 0;
}