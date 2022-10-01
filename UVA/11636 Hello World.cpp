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
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,kase=1,rslt;
    while(cin>>n){
        if(n<-1)break;
       n=n-1;
        rslt=0;
        while(n>0){
            n=n>>1;
            rslt++;
        }
        cout<<"Case "<<kase++<<": "<<rslt<<endl;
    }

    return 0;
}
