#include<stdio.h>
int main()
{
    int n,x,y,i;
    float rslt;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d%d",&x,&y);
    if(y!=0){
        rslt=(float)x/y;
        printf("%.1f\n",rslt);
    }
    else
        printf("divisao impossivel\n");
    }
    return 0;
}
