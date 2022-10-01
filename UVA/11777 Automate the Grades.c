#include<stdio.h>
#define MIN(a,b)((a)<(b))?(a):(b)
int main()
{
    int T,x,y,z,min1,min2,tm;
    int i,t1,t2,tF,At,t2Avg;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%d%d%d%d%d%d%d",&t1,&t2,&tF,&At,&x,&y,&z);
    min1=MIN(x,y);
    min2=MIN(min1,z);
    t2Avg=((x+y+z)-min2)/2;

    tm=(t1+t2+tF+At+t2Avg);

    if(tm>=90)
        printf("Case %d: A\n",i);

    else if(tm>=80&&tm<90)
        printf("Case %d: B\n",i);

    else if(tm>=70&&tm<80)
        printf("Case %d: C\n",i);

    else if(tm>=60&&tm<70)
        printf("Case %d: D\n",i);

    else if(tm<60)
        printf("Case %d: F\n",i);
    }
    return 0;

}
