#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int s,w;
    while(cin>>s>>w){
        cout<<(s>w?"safe":"unsafe")<<endl;
    }
    return 0;
}