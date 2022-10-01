#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
string str="0000000000000000";
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>data;
        //cout<<" Data "<<data<<endl;
        int d=0;
        while(n>0){
            int r=n%10;
            if(r!=0)d++;
            n/=10;
            data.push_back(r);
        }
        cout<<d<<endl;
        int sz=data.size();
        for(int i=sz-1;i>=0;i--){
            if(data[i]!=0){
                    cout<<data[i]<<str.substr(0,i);
                    if(d>1)cout<<" ";
                    d--;
            }
        }
        cout<<endl;
    }
    return 0;
}

