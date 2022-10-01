#include<bits/stdc++.h>
using namespace std;
#define mx 10
#define pii pair<int, int >
#define clr(x) memset(x,0,sizeof(x))
int dx[] = {1,-1,1,-1,2,2,-2,-2};
int dy[] = {2,2,-2,-2,1,-1,1,-1};
bool visited[mx][mx];
int cost[mx][mx];
char s1[10],s2[10];
int bfs(int a, int b, int c, int d)
{
    int rslt;
    queue<pii>q;
    clr(visited);
    q.push(pii(a,b));
    visited[a][b]==true;
    cost[a][b]=0;
    while(!q.empty()){
        pii top=q.front();
        q.pop();

        if(top.first == c && top.second==d){
           int rslt = cost[top.first][top.second];
            return rslt;
        }
        for(int i=0;i<8;i++){
            int f = top.first + dx[i];
            int s = top.second + dy[i];

            if((f>0 && f<=8) && (s>0 && s<=8) && !visited[f][s]){
                visited[f][s] = true;
                cost[f][s] = cost[top.first][top.second]+1;
                q.push(pii(f,s));
            }
        }
    }

}
int main()
{

    while(cin>>s1>>s2){


           /* char frst[2],scnd[2];
            strcpy(frst,s1);
            strcpy(scnd,s2);
            */

        int s1x = s1[0]-96;
        int s1y = s1[1]-'0';
        int s2x = s2[0]-96;
        int s2y = s2[1]-'0';

        int rslt = bfs(s1x,s1y,s2x,s2y);

        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<rslt<<" knight moves."<<endl;

        clr(s1);
        clr(s2);
    }
    return 0;
}
