#include<iostream>
#include<cstdio>
#define MAX(a,b)a>b?a:b
using namespace std;
int main()
{
    int a,b,rslt;
    while(scanf("%d%d",&a,&b)!=EOF){
        rslt=MAX(a,b);

        cout<<rslt<<endl;

    }
    return 0;
}
