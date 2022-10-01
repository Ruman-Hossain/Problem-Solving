#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,firsthalf,secondhalf;
    while(scanf("%d\n",&n)!=EOF){
        firsthalf=0,secondhalf=0;
        char ara[n];
            scanf("%s",&ara);

        int flag=1;
        for(j=0;j<n/2;j++){
            if(ara[j]=='4'||ara[j]=='7'){
                firsthalf+=(ara[j]-'0');
            }
            else{
                flag=0;
                break;
            }
        }

        if(flag==1){
            for(k=(n/2);k<n;k++){
                if(ara[k]=='4' || ara[k]=='7'){
                    secondhalf+=(ara[k]-'0');
                }
                else{
                    flag=0;
                    break;
                }
            }
        }


        if(flag==1 && firsthalf==secondhalf){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
