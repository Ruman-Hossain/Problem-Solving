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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool flag;
    unsigned long long  n,p,i;
    while((cin>>n)&&n>1){
            flag=true;
            p=1;
            while(p<n){
                if(!flag){
                    p*=2;
                    flag=true;
                }
                else{
                    p*=9;
                    flag=false;
                }
            }
        if(flag)cout<<"Ollie wins."<<endl;
        else cout<<"Stan wins."<<endl;
    }
    return 0;
}
