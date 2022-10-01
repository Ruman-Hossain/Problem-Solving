#include<bits/stdc++.h>
using namespace std;
#define ull long long
int main()
{
    ull L1,r1,L2,r2,k;
    while(cin>>L1>>r1>>L2>>r2>>k){

        ull rslt =min(r1,r2) - max(L1,L2 )+ 1;
        if(k<=min(r1,r2) && k>=max(L1,L2))
            rslt-=1;
        if(rslt<0)rslt=0;
        cout<<rslt<<endl;

    }
    return 0;
}
