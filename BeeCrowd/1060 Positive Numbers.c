#include<stdio.h>
int main()
{
    int i,sum=0;
    double a;

    for(i=0;i<6;i++){
        scanf("%lf",&a);
        if(a>0)
            sum+=1;
    }

    printf("%d valores positivos\n",sum);


    return 0;
}
