#include<bits/stdc++.h>
using namespace std;
    char a,b;
    int sx,sy,ex,ey;
    int dx[]={ -1, -1, 1, 1, -2, -2, 2, 2 };
    int dy[]={ 2, -2, 2, -2, 1, -1, 1, -1 };
    int A[8][8];
int main()
{
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>a>>sy>>b>>ey){
        sx=a- 'a';
        sy--;
        ex=b- 'a';
        ey--;

        A[sx][sy]=0;

        queue<pair<int,int> >q;
        q.push(make_pair(sx,sy));
        while(!q.empty()){
            pair<int,int>c = q.front();
            int x=c.first,y=c.second;
            if(x==ex && y == ey)
                break;
            q.pop();

            for(int i=0;i<8;i++){
                if(x + dx[i]>=0 && x + dx[i]<8 &&y + dy[i]>=0 && y + dy[i]<8){
                   q.push(make_pair(x + dx[i], y+dy[i]));
                   A[x + dx[i]][y + dy[i]] = A[x][y]+1;
                }
            }
        }
        cout<<"To get from "<<a<<sy+1<<" to "<<b<<ey+1<<" takes "<<A[ex][ey]<<" knight moves."<<endl;
    }


    return 0;
}
