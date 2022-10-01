#include<stdio.h>
int main()
{
    float a,b,L;
    while(scanf("%f %f",&a,&b)!=EOF){
        L =(a*b)/12.0;
        printf("%0.3f\n",L);
    }
    return 0;
}
