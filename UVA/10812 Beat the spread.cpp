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
    int t,i,a,b,m,n;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
        if(a>=b&&(a+b)%2==0){
            m=(a+b)/2;
            n=(a-b)/2;
            cout<<m<<" "<<n<<endl;
        }
        else{
            cout<<"impossible"<<endl;
        }
    }

    return 0;
}
