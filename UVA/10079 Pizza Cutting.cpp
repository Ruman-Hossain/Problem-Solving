#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n){
        if(n<0){
            break;

        }
        else{
            cout<<1+n*(n+1)/2<<endl;
        }
    }
    return 0;
}
