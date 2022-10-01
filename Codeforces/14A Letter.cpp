#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[55];
    int n,m;
    cin>>n>>m;
    int x,y,a,b;
    x=1e9;
    y=1e9;
    a=0;
    b=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        for(int j=0;j<m;j++){
            if(s[i][j]=='*'){
                x=min(x,i);
                y=min(y,j);
                a=max(a,i);
                b=max(b,j);
            }
        }
    }
    for(int i=x;i<=a;i++){
        for(int j=y;j<=b;j++){
            cout<<s[i][j];
        }
        cout<<endl;
    }
    return 0;
}
