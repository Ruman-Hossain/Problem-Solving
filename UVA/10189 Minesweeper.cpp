#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int m,n,i,j,cnt;
    char rslt[200][200];
    char input[200][200];
    int kase=1;
    while(cin>>m>>n){
        memset(rslt,0,sizeof(rslt));
        memset(input,0,sizeof(input));
        if(m==0&&n==0)
                break;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>input[i][j];
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(input[i][j]=='*'){
                        rslt[i][j]='*';
                    continue;
                }
                else{
                         cnt=0;
                    if(i>0&&j>0     &&input[i-1][j-1]=='*')cnt++;
                    if(i>0          &&input[i-1][j]=='*')cnt++;
                    if(i>0&&j<n-1   &&input[i-1][j+1]=='*')cnt++;
                    if(j>0          &&input[i][j-1]=='*')cnt++;
                    if(j<n-1        &&input[i][j+1]=='*')cnt++;
                    if(j>0&&i<m-1   &&input[i+1][j-1]=='*')cnt++;
                    if(i<m+1        &&input[i+1][j]=='*')cnt++;
                    if(i<m-1&&j<n-1 &&input[i+1][j+1]=='*')cnt++;


                }
                rslt[i][j]='0'+cnt;
            }
        }if(kase>1)
        cout<<endl;
        cout<<"Field #"<<kase++<<":"<<endl;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cout<<rslt[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
