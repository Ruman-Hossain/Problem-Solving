#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cmath>
#define MAX(a,b)(a) > (b )? (a):(b)
using namespace std;
int main()
{
    int a,b,c,d,n,i,x;
    int max1,max2,max3,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d%d%d%d",&a,&b,&c,&d);
        sum=a+b+c+d;
        max1=MAX(a,b);
        max2=MAX(max1,c);
        max3=MAX(max2,d);
        x=max3;


        if((sum-x)>x){
            if(a==b&&b==c&&c==d&&d==a)
                printf("square\n");
            else if(a==c&&b==d||a==b&&c==d||a==d&&b==c)
                printf("rectangle\n");
            else
                printf("quadrangle\n");
            }

    else
        printf("banana\n");
    }
    return 0;
}

