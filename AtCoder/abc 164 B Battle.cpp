#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,c,d;
    while(cin>>a>>b>>c>>d){
        while(c>0 || a>0){
            c=c-b;
            if(c<=0){
                cout<<"Yes"<<endl;
                break;
            }
            a=a-d;
            if(a<=0){
                cout<<"No"<<endl;
                break;
            }
        }
    }
    return 0;
}