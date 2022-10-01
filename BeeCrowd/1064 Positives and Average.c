#include<stdio.h>
#include<math.h>
int main()
{
    int count=0,i;
    float n,sum=0,avg;
    for(i=0;i<6;i++){
        scanf("%f",&n);
        if(n>0){
            count+=1;
            sum+=n;
         }
        }
        avg=sum/count;
        printf("%d valores positivos\n%0.1f\n",count,avg);

    return 0;
}
