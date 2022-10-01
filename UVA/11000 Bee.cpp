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
    unsigned long long n, i,a,b,male,total,t;
    while (scanf("%llu",&n)==1&&n!=-1){
        a=1;
        b=1;
        male=0;
        total=0;
        if(n==0)printf("0 1\n");
        else {
    for(i=1;i<=n;i++){

         male = a+b-1;
         t =a;
         a = b;
         b = b+t;
         total = a+b-1;


    }
    printf("%llu %llu\n",male,total);
        }
    }

    return 0;
}

