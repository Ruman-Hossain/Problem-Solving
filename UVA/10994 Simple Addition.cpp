#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ZeroToN(ll n)
    {
        if(n<=0)
            return 0;
        ll rslt=0,i;
        while(n!=0)
        {
            rslt+= 45*(n/10);
            for(i=n/10*10+1;i<=n;i++)
            {
                rslt+= i%10;
            }
            n/=10;
        }
        return rslt;
    }
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    ll m,n;
    while((cin>>m>>n),&m,&n)
    {
        if(m<0 && n<0)
            break;
        cout<<ZeroToN(n)-ZeroToN(m-1)<<endl;
    }

        return 0;
}
