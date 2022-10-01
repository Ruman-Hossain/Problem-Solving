#include <bits/stdc++.h>
using namespace std;
const unsigned int MOD = 1000000007;
#define ll long long
#define PI 3.1416
string day[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,c;
    while(cin>>a>>b>>c){
        if(c-a-b<=0){
            cout<<"No"<<endl;
            return 0;
        }
        if(4*a*b<((c-a-b)*(c-a-b))){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}