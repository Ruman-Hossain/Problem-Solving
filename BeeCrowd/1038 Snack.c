#include<stdio.h>
int main()
{
    int x,y;
    float sum;
    scanf("%d%d",&x,&y);
    if(x==1)
        sum=4.00*(float)y;
    else if(x==2)
        sum=4.50*(float)y;
    else if(x==3)
        sum=5.00*(float)y;
    else if(x==4)
        sum=2.00*(float)y;
    else if(x==5)
        sum=1.50*(float)y;
   printf("Total: R$ %.2lf\n",sum);

    return 0;
}
