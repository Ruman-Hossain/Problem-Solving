#include<stdio.h>
#include<math.h>
int main()
{
     int X,Y,a,b,i,sum=0;
    scanf("%d%d",&X,&Y);
    if(X>Y)a=Y,b=X;
    else
        a=X,b=Y;
    for(i=a;i<=b;i++){
        if(i%13!=0)
            sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
