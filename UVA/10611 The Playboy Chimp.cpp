#include<bits/stdc++.h>
int main()

{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,q,nqr,i,j,flag,data[50005];
    scanf("%d",&n);
    memset(data,0,sizeof(data));
    for(i=1; i<=n; i++)
        scanf("%d",&data[i]);
    scanf("%d",&q);
    for(i=0; i<q; i++)
    {
        scanf("%d",&nqr);
        flag=0;
        for(j=1; j<=n; j++)
        {
            if(data[j]>=nqr)
            {
                if(data[j-1]>0)
                    printf("%d ",data[j-1]);

                else
                    printf("X ");


                while(data[j]==nqr)
                    ++j;

                if(data[j]>nqr)
                    printf("%d\n",data[j]);

                else if(data[j+1]>0)
                    printf("%d\n",data[j+1]);

                else
                    printf("X\n");

                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d X\n",data[n]);

    }
    return 0;
}
