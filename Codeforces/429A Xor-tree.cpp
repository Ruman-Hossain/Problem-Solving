#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int n,init[110000],goal[110000];
vector<int> g[110000],ans;

void dfs(int u,int fa,int c1,int c2)
{
    if(c1) init[u]^=1;
    if(init[u]!=goal[u])
    {
        c1^=1; ans.push_back(u);
    }
    for(int i=0;i<g[u].size();i++)
    {
        int v=g[u][i];
        if(v==fa) continue;
        dfs(v,u,c2,c1);
    }
}

int main()
{
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    g[0].push_back(1);
    for(int i=1;i<=n;i++)
        scanf("%d",init+i);
    for(int i=1;i<=n;i++)
        scanf("%d",goal+i);
    dfs(0,0,0,0);
    printf("%d\n",(int)ans.size());
    for(int i=0;i<ans.size();i++)
        printf("%d\n",ans[i]);
    return 0;
}
