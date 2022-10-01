#include<bits/stdc++.h>
using namespace std;

int mx(int x,int y){
    if(x>y)return x;
    else return y;
}
int main()
{

    int a,b,c;
    while(cin>>a>>b>>c){
        cout<<mx(abs(a-b),mx(abs(b-c),abs(c-a)))<<endl;
    }
    return 0;
}