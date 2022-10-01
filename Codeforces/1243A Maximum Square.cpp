#include<bits/stdc++.h>
using namespace std;
#define m 10001
int main(){

    //freopen("input.txt","r",stdin);
    int t,n,d;
    cin>>t;
    while(t--){
        cin>>n;
        int a[m]={0};
        for(int i=1;i<=n;i++){
            cin>>d;
            for(int j=1;j<=n;j++){
                if(d>=j)
                    a[j]++;
            }
        }
       // for(int i=1;i<=n;i++)cout<<i<<" "<<a[i]<<endl;
        int mx=-999;
        for(int i=1;i<=n;i++){
            if(a[i]>=i && i>mx)
                mx=i;
        }
        cout<<mx<<endl;
    }
    return 0;
}
