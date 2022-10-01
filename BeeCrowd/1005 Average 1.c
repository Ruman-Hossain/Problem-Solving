#include<stdio.h>
int main()
{
    float A,B,MEDIA;
    while(scanf("%f %f",&A,&B)!=EOF){
    MEDIA = (3.5*A+7.5*B)/(3.5+7.5);
    printf("MEDIA = %0.5f\n",MEDIA);
    }
    return 0;
}
