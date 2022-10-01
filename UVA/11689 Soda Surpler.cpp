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
#include<algorithm>
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI 3.1416

using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,e,f,c;
    int i,m,a,r,rslt;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>e>>f>>c;
        m=e+f;
        rslt=0;
        while(m>=c){

            a=m/c;
            rslt+=a;
            r=m%c;
            m=(a+r);
        }

        cout<<rslt<<endl;
    }

    return 0;
}
