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
//check prime or not
long long  prime(int n){

    long long  i,flag=0,m;
    m=sqrt(n);
    if(n<2)
        flag=0;
    for(i=2;i<=m+1;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}
//Reverse the number
long long  emirp(int n){
    long long  b=0,rvrs;
    while(n>0){
        b=10*b+(n%10);
        n=n/10;

    }
    rvrs=b;
    return rvrs;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long  n,p,e,f;
    while((cin>>n)&&n>1){
        p=prime(n);
        e=emirp(n);
        f=prime(e);
//cout<<"input  = "<<n<<endl<<"Reverse  ="<<e<<endl<<"Prime  ="<<p<<endl<<"Emirp  ="<<f<<endl<<endl;
       if(p==0){
            if(f==0&&n>9&&n!=e)
                cout<<n<<" is emirp."<<endl;
             else
                cout<<n<<" is prime."<<endl;
       }
        else
            cout<<n<<" is not prime."<<endl;
    }

    return 0;
}
