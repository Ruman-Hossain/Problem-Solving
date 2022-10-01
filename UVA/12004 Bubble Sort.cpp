#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;

    cin>>t;
    int kase=1;
    while(t--){
        cin>>n;
        long long  rslt;
        rslt=n*(n-1);
        if(rslt%4==0)cout<<"Case "<<kase++<<": "<<rslt/4;
        else cout<<"Case "<<kase++<<": "<<rslt/2<<"/2";

        cout<<endl;
    }
    return 0;
}
