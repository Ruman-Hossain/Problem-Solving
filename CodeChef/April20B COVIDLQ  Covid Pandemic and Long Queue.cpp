#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)cnt++;

        }
        int flag=1;
        if(cnt==1){
            flag=1;
        }else{
            int start=0;
            int prev;
            for(int i=0;i<n;i++){
                if(a[i]==1){
                    if(start==0){
                        prev=i;
                        start=1;
                    }else{
                        if(i-prev<6){
                            flag=0;
                            break;
                        }
                        prev=i;
                    }
                }
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
