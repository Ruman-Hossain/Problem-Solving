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
   double h ,m,hangl,mangl,rslt;

   while(scanf("%lf:%lf",&h,&m)!=EOF){
    if(h==0&&m==0)break;
    hangl = h*30+(m/60)*30;
    mangl=m*6;

    rslt=(hangl-mangl);

    if(rslt<0)
        rslt=rslt*(-1);

    if(rslt>180)
        rslt=360-rslt;

    printf("%0.3lf\n",rslt);
   }
    return 0;
}
