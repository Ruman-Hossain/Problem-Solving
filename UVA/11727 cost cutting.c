#include<stdio.h>
#include<math.h>
int main()
{
    int i,T;
    long long X,Y,Z,RSLT;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lld%lld%lld",&X,&Y,&Z);
        if(Y<=X&&Y>=Z||Y<=Z&&Y>=X){
           RSLT=Y;
           }
        else if(X<=Y&&X>=Z||X<=Z&&X>=Y){
            RSLT=X;
            }
        else if(Z<=X&&Z>=Y||Z<=Y&&Z>=X){
            RSLT=Z;
            }
        printf("Case %d: %lld\n",i,RSLT);
    }
    return 0;
}
