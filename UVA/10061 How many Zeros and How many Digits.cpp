#include<bits/stdc++.h>
using namespace std;
int zero(int n,int b)
{

    int i,d,m,t;
    for(i=2,d=1;i<=b;i++)
    {
        m=0;
        while(b%i==0){
            m++;
            d=i;
            b/=i;
        }
    }
    for(t=0;n>0;){
        t+=n/d;
        n/=d;
    }
    return t/m;
}
int digit(int n,int b){
    int i;
    double l;
    for(i=2,l=0;i<=n;i++){
        l+=log10(i)/log10(b);
    }
    return l+1;
}
int main()
{

    int n,b;
    while(cin>>n>>b)
    {
        cout<<zero(n,b)<<" "<<digit(n,b)<<endl;
    }
    return 0;
}
