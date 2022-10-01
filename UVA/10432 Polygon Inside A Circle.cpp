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
#define PI acos(-1)

using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    double r;
    int n;
    while(cin>>r>>n){
        double phi=(double)360/n;
        double theta=(double)90-(phi/2.0);
        double angl=(theta*PI)/180.0;

        double land=2*r*cos(angl);
        double height=r*sin(angl);
        double triangle=(land*height)/2;

        double area=triangle*n;

        cout<<setprecision(3)<<fixed<<area<<endl;

    }

    return 0;
}
