//RUMAN CSE (6th Intake) BRUR
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<strstream>
#include<cstdlib>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<vector>
#include<algorithm>
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI 3.1416

using namespace std;
int G(int x,int y)
{
    int gcd,a,b,t;
    a=x;
    b=y;
        while(a!=0){
            t=a;
            a=b%a;
            b=t;

        }
        gcd=b;
    return gcd;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j,sum;
    while((cin>>n)&&n!=0){
        sum=0;
        for(i=1;i<n;i++)
            for(j=i+1;j<=n;j++){
                sum+=G(i,j);
            }
        cout<<sum<<endl;
    }

    return 0;
}
/*
int G(int x,int y){
    if(y==0)
        return x;
    else
        return G(y,x%y);
}
*/
