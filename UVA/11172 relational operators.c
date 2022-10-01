#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(scanf("%d %d",&a,&b)!=EOF){
    if(a<b)
        printf("<\n");
    else if(a>b)
        printf(">\n");
    else
        printf("=\n");

    }
    return 0;
}
