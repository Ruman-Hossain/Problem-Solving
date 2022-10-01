#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,cnt;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cnt=0;
        for(int i=1;n;i=-i){
        cnt+=n*i;
        n/=k;
    }
        cout<<cnt<<endl;

    }
    return 0;
}
