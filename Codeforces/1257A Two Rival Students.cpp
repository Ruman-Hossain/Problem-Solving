#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int t,n,x,a,b;
    cin>>t;
    while(t--){
        cin>>n>>x>>a>>b;
        if(a>b){
            a=a+b;
            b=a-b;
            a=a-b;
        }
        //cout<<"a : "<<a<<" b : "<<b<<endl;
        int m=a,p=b;
        int cnt=0;
        while(cnt<x && b<n){
            cnt++;
            b++;
        }
        while(cnt<x && a>1){
            cnt++;
            a--;
        }
        cout<<max(p-m,max(p-a,max(b-m,b-a)))<<endl;
    }
    return 0;
}
