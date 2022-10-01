#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long n,rslt;
    while(cin>>n&&n>1){
        rslt=(((n*(n+2))/2)*3)-6;

        cout<<rslt<<endl;
    }

    return 0;
}
