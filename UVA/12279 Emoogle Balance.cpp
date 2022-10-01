#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,n,rslt,ts,tg;
    int a[10000],t=75,kase=1;

    while(t--){
          scanf("%d",&n);

    if(n==0){
        break;
    }
    else{

            tg=ts=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
                if(a[i]==0)
                    tg++;
                else
                    ts++;

                }
                rslt=ts-tg;


            }
            printf("Case %d: %d\n",kase++,rslt);


    }
    return 0;
}
