#include<bits/stdc++.h>
int r3,c3,r1,c1,r2,c2,kase=0;
int s[70][6],a[9][9];
int dx[8]={0,0,1,1,1,-1,-1,-1};
int dy[8]={1,-1,1,0,-1,1,0,-1};
using namespace std;
void WorkOn(int x,int y)
{
    int m=0,n=1,i;

    s[1][0]=x;
    s[1][1]=y;
    s[1][2]=0;

    while(m<n)
    {
        m++;
        for(i=0;i<8;i++)
        {
            x=s[m][0]+dx[i]; y=s[m][1]+dy[i];
            if(!a[x][y]&&x>0&&x<=8&&y>0&&y<=8)
            {
                n++;
                s[n][0]=x;
                s[n][1]=y;
                s[n][2]=a[x][y]=s[m][2]+1;
                if(a[r2][c2]>0)
                {
                    printf("Case %d: %d\n",++kase,a[r2][c2]);
                    return;
                }
            }
        }
    }
}
int main()
{
    while(scanf("%d %d %d %d %d %d",&r1,&c1,&r2,&c2,&r3,&c3)!=EOF)
    {
        memset(a,0,sizeof(a));
        a[r1][c1]=1; a[r3][c3]=1;

        WorkOn(r1,c1);
    }
    return 0;
}
