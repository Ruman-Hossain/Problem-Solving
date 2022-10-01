#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,rslt,t;
    cin>>t;
    while(t--){
            cin>>n;
        rslt=(int)(sqrt((1+8*n))-1)/2;
        cout<<rslt<<endl;
    }

    return 0;
}
