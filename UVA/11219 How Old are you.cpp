//RUMAN CSE (6th Intake) BRUR
#include<iostream>
#include<cstdio>
#include<cmath>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
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

    int d1,d2,m1,m2,y1,y2,y,t,i;
    while(scanf("%d",&t)!=EOF){

    for(i=1;i<=t;i++){
            scanf("%d/%d/%d",&d2,&m2,&y2);
            scanf("%d/%d/%d",&d1,&m1,&y1);
    if(d1>d2){
         d2=d2+30;
         m1=m1+1;
    }
    if(m1>m2){
            m2=m2+12;
            y1=y1+1;
    }
    y=y2-y1;

    if(y<0) printf("Case #%d: Invalid birth date\n",i);
    else if(y>130) printf("Case #%d: Check birth date\n",i);
    else printf("Case #%d: %d\n",i,y);
        }
    }
    return 0;
}
