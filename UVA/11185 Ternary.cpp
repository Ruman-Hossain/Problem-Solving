#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;

    while(cin>>n){
        long long  r,b=1,trnry=0;
            if(n<0)
            break;
    while(n>0){
        r=n%3;
        trnry=trnry+r*b;
        n=n/3;
        b=b*10;
    }
    cout<<trnry<<endl;
    }
    return 0;
}
