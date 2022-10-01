#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned int a,b,m,n;
    cin>>a>>b;
    if(a>b){
        m=b;
        n=(a-b)/2;
    }
    else{
        m=a;
        n=(b-a)/2;

    }

    printf("%d  %d\n",m,n);

    return 0;
}
