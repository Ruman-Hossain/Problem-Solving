#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int input(){
    int a;
    cin>>a;
    return a;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
    int x,y,a,b,c;
    while(cin>>x>>y>>a>>b>>c){
        int n=x+y;
        priority_queue<int>P,Q,T;
        while(a--)P.push(input());
        while(b--)Q.push(input());
        while(x--){T.push(P.top());P.pop();}
        while(y--){T.push(Q.top());Q.pop();}
        while(c--)T.push(input());
        ll rs=0;
        while(n--){
            rs+=T.top();
            T.pop();
        }
        cout<<rs<<endl;
    }
 
    return 0;
}