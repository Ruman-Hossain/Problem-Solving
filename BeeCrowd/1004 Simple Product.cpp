#include<stdio.h>
int main()
{
    int A,B,PROD;
    while(scanf("%d %d",&A,&B)!=EOF){
        PROD = A*B;
        printf("PROD = %d\n",PROD);
    }
    return 0;
}
