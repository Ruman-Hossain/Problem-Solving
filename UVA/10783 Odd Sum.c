#include<stdio.h>
int main()
{
    int a,b,i,j,T,count;
    scanf("%d",&T);
    for(i=0;i<T;i++){
    scanf("%d%d",&a,&b);
    count=0;
    for(j=a;j<=b;j++){
    if(j%2!=0){
    count=count+j;
    }

    }
     printf("Case %d: %d\n",i+1,count);
}
}
