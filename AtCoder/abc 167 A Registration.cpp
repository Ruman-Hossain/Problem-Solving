#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s,r;
    while(cin>>s>>r){
        int d=s.size();
        //cout<<d<<endl;
        if(s==r.substr(0,d))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}