#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int temp,rslt ;
    while(a!=0){
        temp=a;
        a=a%b;
        rslt=b;
        b=a;
    }
    return rslt;
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
     int GCD=gcd(a,b);
     if(GCD==a&&(b%a==0))cout<<a<<" "<<b<<endl;
     else cout<<"-1"<<endl;
    }

    return 0;
}
