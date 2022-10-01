#include<bits/stdc++.h>
using namespace std;
int fact[16];
int main()
{

    int i,n;
    for(i=n=fact[0]=1;i<16;i++){
        n*=i;
        fact[i]=n;
    }


    while(cin>>n){
        int rslt=0;
        for(i=15;n>0&&i>0;n%=fact[i--])
            rslt+=n/fact[i];
        cout<<rslt<<endl;
    }
    return 0;
}
