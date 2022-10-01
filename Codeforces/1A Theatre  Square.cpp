#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long  n,m,a,b,c;
    cin>>n>>m>>a;
    b=m/a;
    c=n/a;
    if(m%a!=0)b=b+1;
    if(n%a!=0)c=c+1;
    cout<<b*c<<endl;
    return 0;
}
