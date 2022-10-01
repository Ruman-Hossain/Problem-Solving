#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    long long L,W,H;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lld%lld%lld",&L,&W,&H);
        if(L<=20&&W<=20&&H<=20)
            printf("Case %d: good\n",i+1);
       else
            printf("Case %d: bad\n",i+1);
    }
    return 0;
}

