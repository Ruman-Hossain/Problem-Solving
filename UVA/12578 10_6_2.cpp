#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<map>
#include<algorithm>
#define PI acos(-1.0)
using namespace std;
int main()
{

    int t;
    double L,W,r,red,rctngl,green;
    cin>>t;
    while(t--){
        cin>>L;
        W=(L*6)/10;
        r=L/5;
        red=PI*r*r;
        rctngl=L*W;
        green=rctngl-red;

         printf("%0.2lf %0.2lf\n",red,green);
    }
    return 0;
}
