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
    int n,i,a,b,c;
    for(i=0; ;i++){
        cin>>n;
        if(n==0)break;
        else{
       a=n/3;
       while(1){


        n=(n/3)+(n%3);
        if(n==2)n+=1;
        if(n==1)break;
        a+=n/3;
       }

        cout<<a<<endl;
    }

    }

    return 0;
}
