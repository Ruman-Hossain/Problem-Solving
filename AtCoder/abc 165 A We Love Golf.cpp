#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int k,a,b;
    while(cin>>k>>a>>b){
        int x=a/k;
        int y=b/k;
        int flag=0;
        for(int i=x;i<=y;i++){
            if(k*i>=a&&k*i<=b){
                cout<<"OK"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)cout<<"NG"<<endl;
    }
    return 0;
}