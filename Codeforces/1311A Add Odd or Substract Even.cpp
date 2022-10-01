#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==b)cout<<"0"<<endl;
        else if(a%2==0&&b%2==0){
            if(a>b){
                cout<<"1"<<endl;
            }else{
                cout<<"2"<<endl;
            }
        }
        else if(a%2==0 && b%2!=0){
            if(a<b){
                cout<<"1"<<endl;
            }else{
                cout<<"2"<<endl;
            }
        }else if(a%2!=0 && b%2==0){
            if(a>b){
                cout<<"2"<<endl;
            }else{
                cout<<"1"<<endl;
            }
        }else{
            if(a>b)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
    }
    return 0;
}
