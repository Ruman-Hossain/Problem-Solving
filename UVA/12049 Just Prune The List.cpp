#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,a,b,ar1[10000],ar2[10000];
    int i,j,cnt;
    cin>>t;

    while(t--){
        cin>>a>>b;
        for(i=0;i<a;i++){
            cin>>ar1[i];
        }
        for(j=0;j<b;j++){
            cin>>ar2[j];
        }
        sort(ar1,ar1+a);
        //for(i=0;i<a;i++)cout<<ar1[i]<<" ";
        //cout<<endl;
        sort(ar2,ar2+b);
       // for(j=0;j<b;j++)cout<<ar2[j]<<" ";
       // cout<<endl;
         cnt=0;
        for(i=0,j=0;i<a&&j<b;){
            if(ar1[i]!=ar2[j]){
                if(ar1[i]<ar2[j]){
                    cnt++;
                    i++;
                }
                else{
                    cnt++;
                    j++;
                }
            }
                else{
                    i++;
                    j++;
                }
        }
            if(i<a)
                cnt+=a-i;
            if(j<b)
                cnt+=b-j;

        cout<<cnt<<endl;
    }
    return 0;
}
