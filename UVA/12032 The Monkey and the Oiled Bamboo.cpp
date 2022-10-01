#include<bits/stdc++.h>
using namespace std;
int main()
{
      //freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    int t,n,k,a[100000],i,mx,rslt,b;
    cin>>t;
    int kase=1;
    while(t--){
        cin>>n;
         a[0]=0;
        for(i=1;i<=n;i++){
            cin>>a[i];

        }
       mx=-1;
        for(i=1;i<=n;i++){
                b=a[i]-a[i-1];
                if(b>mx)mx=b;
        }
        rslt=mx;
        for(i=1;i<=n;i++){
            b=a[i]-a[i-1];
            if(b==mx){
               mx--;
            }
            else if( b>mx){
               rslt++;
                break;
            }
                }

        cout<<"Case "<<kase++<<": "<<rslt<<endl;
    }
    return 0;
}
