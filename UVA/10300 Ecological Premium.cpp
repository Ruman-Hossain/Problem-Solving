//RUMAN CSE (6th Intake) BRUR
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<map>
#include<algorithm>
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI 3.1416

using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,n,a,b,c;
    cin>>t;
    while(t--){
        cin>>n;
        int rslt=0;
        for(int i=0;i<n;i++){
            cin>>a>>b>>c;
            rslt+= (a*c);
        }
        cout<<rslt<<endl;
    }
    return 0;
}
