#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double n,rslt;
    for(i=1;cin>>n && n;i++){

        rslt = ceil((3+sqrt(9+8*n))/2);

        printf("Case %d: %.0lf\n",i,rslt);

        }
    return 0;
}
