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
#include<iomanip>
#include<algorithm>
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI 3.1416

using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,i,sq,cnt;
    while((cin>>a>>b)&&a!=0||b!=0&&b>=a){
        cnt=0;
        for(i=a;i<=b;i++){
            sq=sqrt(i);
            if(i==sq*sq)cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
