#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,d,r,n,rslt;

    cin>>a>>b;
    rslt=a;
    while(a>=b){
        rslt+=a/b;
        a=(a/b)+(a%b);
    }
    cout<<rslt<<endl;
    return 0;
}
