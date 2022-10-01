#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
   unsigned int t,n,rslt,kase=1;

    cin>>t;
    while(t--){
            cin>>n;
    if(n==1)rslt=n;
    else
        rslt=(n+n)-1;

        cout<<"Case #"<<kase++<<": "<<rslt<<endl;
    }
    return 0;
}
