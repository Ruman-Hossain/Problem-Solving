#include<bits/stdc++.h>
using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define LL long long
#define MX 100000
#define MOD 1000000007

char grid[110][110];
map < pair < int,int >, int > visit;

int n,m,cnt=0;
int adjx[]={1,1,1,0,-1,-1,-1,0};
int adjy[]={-1,0,1,1,1,0,-1,-1};

void dfs(int a,int b)
{
    int x,y,flag=0;
    for(int i=0;i<8;i++)
        {
            x= a+adjx[i];
            y= b+adjy[i];
            //cout<<x<<" "<<y<<endl;
          if(x>=1 && x<=n && y>=1 && y<=m && grid[x][y]=='*'){
             flag=1;
             break;
          }

        }
        if(flag==0)
            cnt++;
}

int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>n>>m)
    {
       cnt=0;
        if(n==0 && m==0)    break;
        CLR(grid);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>grid[i][j];
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(grid[i][j]=='*')
                    dfs(i,j);

        cout<<cnt<<endl;
       // cout<<"....................FINISHED.................."<<endl;
    }
}


/*
.............OR.........SAME.....
int main()
{

    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    while(cin>>n>>m)
    {
        cnt=0;
        if(n==0 && m==0)
            break;
        memset(grid,0,sizeof(grid));

        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>grid[i][j];

        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(grid[i][j]=='*')
                    {
                        int a=i,b=j;
                        int x,y,flag=0;
                        for(int k=0;k<8;k++)
                            {
                                x= a+adjx[k];
                                y= b+adjy[k];
                                //cout<<x<<" "<<y<<endl;
                                if(x>=1 && x<=n && y>=1 && y<=m && grid[x][y]=='*')
                                {
                                     flag=1;
                                     break;
                                }

                            }
                            if(flag==0)
                                cnt++;
                    }

        cout<<cnt<<endl;

    }
    return 0;
}
*/
