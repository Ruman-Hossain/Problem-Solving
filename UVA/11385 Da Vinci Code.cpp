#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    char name[110],hobe[110],nh[110];
    unsigned long long t,n,i,j,k,nmbr,ln,mx,num[110],fib[110];

    fib[1]=1;
    fib[2]=2;
    for(i=3;i<110;i++)
        fib[i] = fib[i-1]+fib[i-2];

    scanf("%llu",&t);
    while(t--){
        scanf("%llu",&n);
        for(i=0;i<n;i++)
            scanf("%llu",&num[i]);

        scanf("\n");
        gets(name);
        ln=strlen(name);

        for(j=0,k=0;j<ln;j++){
            if(name[j] >='A' && name[j]<='Z'){
                hobe[k++] = name[j];
            }
        }
        hobe[k]='\0';
        memset(nh,'0',sizeof(nh));
        mx=0;
        for(j=0;j<n;j++){
            for(k=1;k<110;k++){
                if(fib[k] == num[j]){
                    //printf("%llu %llu %c\n",k,num[j],hobe[j]);
                    nmbr=k;
                    break;
                }
            }
            if(nmbr>mx)mx=nmbr;
            nh[nmbr]=hobe[j];
            //printf("%c\n",nh[nmbr]);
        }
        nh[mx+1]='\0';
        for(j=1;j<=mx;j++){
            if(nh[j]=='0')printf(" ");
            else printf("%c",nh[j]);
        }
        printf("\n");
    }
    return 0;
}
