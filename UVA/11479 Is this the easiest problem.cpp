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
    int t,i;
    long long max1,max2,pssblChk,a,b,c;
    cin>>t;
    for(i=0;i<t;i++){

        cin>>a>>b>>c;
        max1=MAX(a,b);
        max2=MAX(max1,c);
        pssblChk=(a+b+c)-max2;

        if(pssblChk>max2){
            if(a==b&&b==c&&c==a)
                cout<<"Case "<<i+1<<": Equilateral"<<endl;
           else  if(a==b||a==c||b==c)
                cout<<"Case "<<i+1<<": Isosceles"<<endl;
           else
                cout<<"Case "<<i+1<<": Scalene"<<endl;
        }
        else
            cout<<"Case "<<i+1<<": Invalid"<<endl;

    }

    return 0;
}
