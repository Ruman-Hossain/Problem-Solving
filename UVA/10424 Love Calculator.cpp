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
int addAll(int n){
     long long sm=0;
        long long t=n;
    if(n<10)
        return n;

    else{
        while(t>0){
            sm+=t%10;
            t=t/10;
        }
    }
    return addAll(sm);
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char s1[30],s2[30];
    int i,rslt1,rslt2;
    while(gets(s1)){

    gets(s2);
    int ln1=strlen(s1);
    int ln2=strlen(s2);
    rslt1=0;
    for(i=0;i<ln1;i++){
        if(s1[i]>='a'&&s1[i]<='z'){
            rslt1+=s1[i]-'a'+1;
        }
        else if(s1[i]>='A'&&s1[i]<='Z'){
            rslt1+=s1[i]-'A'+1;
        }

    }

    rslt2=0;
    for(i=0;i<ln2;i++){
        if(s2[i]>='a'&&s2[i]<='z'){
            rslt2+=s2[i]-'a'+1;
        }
        else if(s2[i]>='A'&&s2[i]<='Z'){
            rslt2+=s2[i]-'A'+1;
        }
    }

    int n1=addAll(rslt1);
    int n2=addAll(rslt2);
    float ans;

    if(n1>n2)
        ans=(float)n2*100/(float)n1;
    else
        ans=(float)n1*100/(float)n2;

    printf("%0.2f %%\n",ans);
    }
    return 0;
}
