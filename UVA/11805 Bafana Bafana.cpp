#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    int kase;
    cin>>t;
    kase=1;
    while(t--){
        cin>>a>>b>>c;
        int rslt=b+c;
        while(rslt>a){
            rslt=rslt-a;
        }
        cout<<"Case "<<kase++<<": "<<rslt<<endl;

    }

    return 0;
}
