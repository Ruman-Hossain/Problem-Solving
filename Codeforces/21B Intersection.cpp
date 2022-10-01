#include<bits/stdc++.h>
using namespace std;
int check(int a,int b,int c){
    if(a==0&&b==0){
        if(c==0)return 9999; // return anything. as u wish except 1,0,-1 its needed for else
        else return 0;
    }
    return 1;
}
int print(int a,int b,int c,int d,int e,int f){
    if(a*e == b*d){
        if((a*f==d*c) && (b*f==c*e))return -1;
        else  return 0;
    }
    return 1;
}
int main()
{

    int a,b,c,d,e,f,x,y;
    while(cin>>a>>b>>c>>d>>e>>f){
    x=check(a,b,c);
    y=check(d,e,f);
    if(x==1&&y==1){
        cout<<print(a,b,c,d,e,f)<<endl;


    }
    else if(x==0 || y==0){
        cout<<"0"<<endl;
    }
    else cout<<"-1"<<endl;
    }
    return 0;
}
