#include<stdio.h>
#include<iostream>
#include<math.h>
#define MAX(a,b)(a) > (b)?(a):(b);
using namespace std;
int main()
{
    int a,b,c,max,max1;
    scanf("%d %d %d",&a,&b,&c);
    max1=MAX(a,b);
    max=MAX(max1,c);
    printf("%d eh o maior\n",max);
    return 0;
}
