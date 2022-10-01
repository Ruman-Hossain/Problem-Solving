#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    while(cin>>n){
        long long  q,r;
        long long  rslt=0;
        //cout<<n-1<<endl;   sutro lagei na. 1 kom
        while(n>=2){
            q=n/2;
            r=n%2;
            rslt+=q;
            n=q+r;

        }

        cout<<rslt<<endl;
    }
    return 0;
}
