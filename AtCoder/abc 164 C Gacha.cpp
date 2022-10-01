#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    while(cin>>n){
        set<string>str;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            str.insert(s);
        }
        cout<<str.size()<<endl;
    }
    return 0;
}