#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,a;
    cin>>t;
    while(t--){
        double rslt=0;
        cin>>a;

        for(n=2;n<=a;n++){
            rslt+=log10(n);
        }
        cout<<(int)(rslt+1)<<endl;
    }
    return 0;
}
