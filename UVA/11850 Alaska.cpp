//RUMAN CSE (6th Intake) BRUR
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<map>
#include<algorithm>
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI 3.1416
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,d,a[1425],i,flag;
    while(scanf("%d",&t)){
            flag=0;
        if(t==0)
            break;
        else{
    for(i=0;i<t;i++){
        cin>>a[i];
    }
    for(i=0;i<t;i++){
        flag=0;
        sort(a,a+t,greater<int>());
    d=2*(1422-a[0]);
    if(d<0)d*=(-1);
   // for(i=0;i<t;i++)
        //cout<<a[i]<<" ";
    for(i=0;i<t;i++){
        if(abs(a[i]-a[i+1])>200)
            flag+=1;
            }
    }

        if(flag!=0||d>200)
            cout<<"IMPOSSIBLE"<<endl;
        else
            cout<<"POSSIBLE"<<endl;
        }
    }
    return 0;
}
