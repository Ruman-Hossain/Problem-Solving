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

    int t,m,n,x,y;
   while(cin>>t){
    if(t==0)
        break;
    cin>>m>>n;
    while(t--){
        cin>>x>>y;

        if(x==m||y==n)cout<<"divisa"<<endl;
        else if(x<m&&y>n)cout<<"NO"<<endl;
        else if(x>m&&y>n)cout<<"NE"<<endl;
        else if(x>m&&y<n)cout<<"SE"<<endl;
        else if(x <m&&y< n)cout<<"SO"<<endl;

        }

    }
    return 0;
}
