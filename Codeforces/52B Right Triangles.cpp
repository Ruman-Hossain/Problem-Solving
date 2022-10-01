#include<bits/stdc++.h>
using namespace std;
#define mx 1010
char s[mx][mx];
int data[2][mx];
int main()
{
    int n,m,i,j;
    long long rslt=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s[i][j]=='*'){
                data[0][i]++;
                data[1][j]++;
            }
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(s[i][j]=='*')
                rslt+= ((data[0][i]-1) * (data[1][j]-1));
    cout<<rslt<<endl;


    return 0;
}
