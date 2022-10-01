#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
     int i,sum,r,ln;
    char s[1000];
    while(gets(s))
    {
    r=0;
    ln=strlen(s);
    if(ln==1 && s[0]=='0')
    break;
    for(i=0;i<ln;i++)
     {
     sum=r*10+(s[i]-'0');
     r=sum%17;
     }
    if(r==0)
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
    }
    return 0;
}
