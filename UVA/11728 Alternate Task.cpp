#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag,kase=1;
    while(cin>>n){

        if(n==0)break;
        if(n==1){
                cout<<"Case "<<kase++<<": 1"<<endl;
                continue;
        }
        flag=0;
        for(int m=999;m>=1;m--){
                if(flag==1)break;
            int rslt=0;
            for(i=1;i*i<=m;i++){
                if(m%i==0){
                    if(i*i<m){
                        rslt+=i;
                        rslt+=(m/i);

                    }
                    else if(i*i==m){
                        rslt+=i;
                    }
                }
            }
            if(rslt==n){
                flag=1;
                cout<<"Case "<<kase++<<": "<<m<<endl;
            }

        }
        if(flag==0){
            cout<<"Case "<<kase++<<": -1"<<endl;
            continue;
        }

    }
    return 0;
}
