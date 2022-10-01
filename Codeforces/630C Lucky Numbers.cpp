#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long  n,a,i;
    cin>>n;
    a=0;
    for(i=1;i<=n;i++){
        a+=pow(2,i);
    }
    cout<<a<<endl;
    return 0;
}
