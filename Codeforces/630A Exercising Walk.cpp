#include<bits/stdc++.h>
using namespace std;

int a,b,c,d,x,y,x1,y1,x2,y2;

int main(){
    int t;
    cin>>t;
    while (t--){
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        x+=-a+b, y+=-c+d;
        if (x>=x1&&x<=x2&&y>=y1&&y<=y2&&(x2>x1||a+b==0)&&(y2>y1||c+d==0)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}