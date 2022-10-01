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
long long sum(int n){
     long long sm=0;
        long long t=n;
    if(n<10)
        return n;

    else{
        while(t>0){
            sm+=t%10;
            t=t/10;
        }
    }
    return sum(sm);
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    unsigned long long n,rslt;
    while(cin>>n){
        if(n==0)
            break;
        else{
            rslt=sum(n);
            cout<<rslt<<endl;
        }
    }
    return 0;
}
