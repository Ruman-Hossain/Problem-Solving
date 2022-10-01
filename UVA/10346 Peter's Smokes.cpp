#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,r,rslt;
    while(cin>>n>>k){
            rslt=n;
        while(n>=k){
            rslt+=n/k;
            n=(n/k)+(n%k);

        }
        cout<<rslt<<endl;

    }

    return 0;
}
