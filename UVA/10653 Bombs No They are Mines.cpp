#include<bits/stdc++.h>
using namespace std;
#define max 1010
#define clr(a)  memset(a,0,sizeof(a))
#define cclr(b) memset(b,'\0',sizeof(b))
char data[max][max];
int visit[max][max];
int cost[max][max];
int dx[]= {0,0,-1,1};
int dy[]= {1,-1,0,0};
int row,col,endX,endY;
//int dz[]= {0, 0,0, 0,1,-1};
void bfs(int w,int x)
{

    int a,b,ax,by;

    clr(visit);
    clr(cost);

    queue<int>q;
    q.push(w);
    q.push(x);

    visit[w][x]=1;
    cost[w][x]=0;

    while(!q.empty()){

        a=q.front();
        q.pop();

        b=q.front();
        q.pop();

        for(int k=0;k<4;k++){
            ax = a + dx[k];
            by = b + dy[k];
            if( (ax>=0 && ax<row) && (by>=0&&by<col) && (!data[ax][by])){
                if(!visit[ax][by]){
                    visit[ax][by]=1;
                    cost[ax][by] = 1 + cost[a][b];
                    q.push(ax);
                    q.push(by);
                    }
                }

                if(ax==endX && by ==endY){
                   cout<<cost[endX][endY]<<endl;
                   return;

                }
        }

    }

}
int main()
{

    // freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
    int R,rowNmb,numBombs,bomb,strtX,strtY;
    while((cin>>row>>col)&&row&&col){
        cin>>R;
        clr(data);

        for(int i=0;i<R;i++){
            cin>>rowNmb>>numBombs;

            for(int j=0;j<numBombs;j++){
                cin>>bomb;
                data[rowNmb][bomb]=1;
            }
        }
        cin>>strtX>>strtY;
        cin>>endX>>endY;

        bfs(strtX,strtY);

    }
   return 0;
}
