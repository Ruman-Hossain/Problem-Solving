#include<iostream>
#include<cstdio>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,i,j,a[3005],b[3005],test;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
            for(i=0;i<n;i++){
                cin>>a[i];
            }
                j=1;
                for(i=1;i<n;i++){
                b[j++]=abs(a[i]-a[i-1]);

            }
            sort(b+1,b+j);
             test=1;
            for(i=0;i<j;i++){
                if(b[i]!=i){
                    test=0;
                    break;
                }
            }
         if(test)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
        }

    return 0;
}
