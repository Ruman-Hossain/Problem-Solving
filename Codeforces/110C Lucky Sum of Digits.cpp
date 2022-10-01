#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
int main ()
{
    int a,b,c,d,e,i,k=0;
    fast;
    while(cin>>a){
    b=a/7;
    c=a%7;
    if(c==0){
        for(i=0;i<b;i++)
           cout<<"7";
        return 0;
    }
    else
    {
        for(i=0;;){
            d=7*k+c;
            if(d%4==0){
                e=d/4;
                for(i=0;i<e;i++)
                    cout<<"4";
                for(i=0;i<b-k;i++)
                    cout<<"7";
                return 0;
            }
            if(d%4!=0)
                k++;
            if(d==a){
                cout<<"-1";
                return 0;
            }
        }
    }
    }
    return 0;
}
