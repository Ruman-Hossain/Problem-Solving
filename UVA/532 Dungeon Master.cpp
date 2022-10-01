#include<bits/stdc++.h>
using namespace std;
#define max 35
#define clr(a)  memset(a,0,sizeof(a))
#define cclr(b) memset(b,'\0',sizeof(b))
char data[max][max][max];
int visit[max][max][max];
int cost[max][max][max];
int L,R,C;
int dx[]= {1,-1,0, 0,0,0};
int dy[]= {0, 0,1,-1,0,0};
int dz[]= {0, 0,0, 0,1,-1};
void bfs(int x, int y, int z){

    int a,b,c,i,ax,by,cz;

    queue<int>q;
    q.push(x);
    q.push(y);
    q.push(z);

    visit[x][y][z]=1;
    cost[x][y][z]=0;

    while(!q.empty()){

    a=q.front();
    q.pop();

    b=q.front();
    q.pop();

    c=q.front();
    q.pop();

    for( i=0;i<6;i++){

         ax = a + dx[i];
         by = b + dy[i];
         cz = c + dz[i];

        if((ax>=0 && ax<L) && (by>=0 && by<R) && (cz>=0 && cz<C) && (data[ax][by][cz]!='#')){
            if(visit[ax][by][cz]==0){
                visit[ax][by][cz]=1;
                cost[ax][by][cz] = cost[a][b][c] + 1;
            //cout << a << "," << b << "," << c  << " to " << ax << "," << by << "," << cz << endl;
                q.push(ax);
                q.push(by);
                q.push(cz);

                }
            }
        }
    }
}
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,a,b,c,d,e,f;
    while(cin>>L>>R>>C){
        cclr(data);
        clr(visit);
        clr(cost);

        if(L==0&&R==0&&C==0)
            break;
        for(i=0;i<L;i++){
            for(j=0;j<R;j++){
                for(k=0;k<C;k++){
                    cin>>data[i][j][k];
                }
            }
            getchar();
        }
        for(i=0;i<L;i++){
            for(j=0;j<R;j++){
                for(k=0;k<C;k++){
                    if(data[i][j][k]=='S'){
                        a=i;
                        b=j;
                        c=k;
                    }
                    if(data[i][j][k]=='E'){
                        d=i;
                        e=j;
                        f=k;
                    }
                }
            }
        }
        bfs(a,b,c);
        if(cost[d][e][f]==0)
            cout<<"Trapped!"<<endl;
        else
            cout<<"Escaped in "<<cost[d][e][f]<<" minute(s)."<<endl;
    }
}
