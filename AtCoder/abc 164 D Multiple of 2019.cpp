#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string str;
    while(cin>>str){
        int A[2019]={0},rslt=0,pre=0,t=1;
        A[0]++;
        int n=str.size();
        for(int i=0;i<n;i++){
            rslt+=A[(pre+=(str[n-1-i]-'0')*t)%=2019]++;
            (t*=10)%=2019;
        }
        cout<<rslt<<endl;
    }
    return 0;
}