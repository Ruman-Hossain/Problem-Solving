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
    int n,i;
    int rslt;
        while(cin>>n){
                if(n==0)break;
        else{
        if(n==1)rslt=1;
            else{
                    rslt=1;
            for(i=2;i<=n;i++){
                rslt+=pow(i,2);
            }

            }
        }
            cout<<rslt<<endl;
        }
    return 0;
}
