#include<stdio.h>
#include<math.h>
int main()
{
    int v,t,T,s;
    while(scanf("%d%d",&v,&t)==2){
       T=2*t;
       s=v*T;
       printf("%d\n",s);
    }
    return 0;
}
