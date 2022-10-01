#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
const int mxn = 300;
const int mxm = 40044;
struct{
    int t2, nxt;
    bool ok = 1;
    bool rslt = 0;
}E[mxm << 1];
int t2t = 1, zh[mxn];
int cure[mxn];
void add_edge(int u, int v){
    E[++t2t].t2 = v;
    E[t2t].nxt = zh[u];
    E[t2t].ok = 1;
    E[t2t].rslt = 0;
    zh[u] = t2t;
}
int d[mxn];
int flag = 1;
void dfs(int u, bool p){
   // cout<<u<<" "<<p<<endl;
    if (!p && (d[u] % 2)) return;
    for (int i = zh[u]; i; i = E[i].nxt){
     //   cout<<" "<<u<<" "<<E[i].t2<<endl;
        zh[u] = E[i].nxt;
        if (E[i].ok){
            E[i].ok = E[i ^ 1].ok = 0;
            E[i].rslt = 1;
            dfs(E[i].t2, 0);
            if (flag) return;
        }
    }
}
int n, m;
int main(){
    int T;
    cin>>T;
    while (T--){
        flag = 1;
        scanf("%d%d", &n, &m);
        for(int i=1;i<=n;i++){
            zh[i] = 0;
            d[i] = 0;
        }
        t2t = 1;
        for(int i=1;i<=m;i++){
            int u, v;
            cin>>u>>v;
            add_edge(u, v);
            add_edge(v, u);
            d[u]++;
            d[v]++;
        }
        for(int i=1;i<=n;i++)
            cure[i] = zh[i];
        for(int i=1;i<=n;i++){
            if (d[i] % 2){
                while (zh[i])
                    dfs(i, 1);
            }
        }
        flag = 0;
        int rslt = 0;
        for(int i=1;i<=n;i++){
            if (d[i] % 2 == 0){
                dfs(i, 1);
                rslt++;
            }
        }
        cout<<rslt<<endl;
       // cout<<"dd"<<endl;
        for(int i=1;i<=n;i++)
            for (int j = cure[i]; j; j = E[j].nxt)
                if (E[j].rslt)
                    cout<<i<<" "<<E[j].t2<<endl;


    }

    return 0;

}