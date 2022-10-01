#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>

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
int n,m;
int adjx[]={1,1,1,0,-1,-1,-1,0};
int adjy[]={-1,0,1,1,1,0,-1,-1};

void dfs(int a,int b)
{
    int x,y;
    visit[MP(a,b)]=1;
   // cout<<a<<" "<<b<<endl<<"................."<<endl;
    for(int i=0;i<8;i++)
        {
            x= a+adjx[i];
            y= b+adjy[i];
            //cout<<x<<" "<<y<<endl;
          if(grid[x][y]=='@' && !visit[MP(x,y)])
          dfs(x,y);
        }
}

int main()
{

      // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>n>>m)
    {
        if(n==0 && m==0)    break;

        CLR(grid);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>grid[i][j];

        visit.clear();
        int cnt=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(grid[i][j]=='@' && !visit[MP(i,j)])
                {
                    cnt++;
                   // cout<<"..................OK START...................."<<endl;
                    dfs(i,j);
                }
        cout<<cnt<<endl;
       // cout<<"....................FINISHED.................."<<endl;
    }
}
