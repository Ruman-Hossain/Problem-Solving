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
   int kase=1;
   int n, mh,mm,h,m;
   cin>>n;
   while(n--){
    scanf("%d:%d",&h,&m);

    mh=0,mm=0;
    if(m==0){
        mh=12-h;
        if(mh==0){
            mh=12;
        }
    }
    else{
        mh=11-h;
        if(mh<=0){
            mh=mh+12;
        }
        mm=60-m;
    }
    printf("%02d:%02d\n",mh,mm);
   }
    return 0;
}
