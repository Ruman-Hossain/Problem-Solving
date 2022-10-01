#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){


    string s1,s2;
    int ts1,ts2;
    double rslt;

    while(getline(cin,s1)){
        getline(cin,s2);

        ts1=ts2=0;

        for(int i=0;i<s1.size();i++){
            if(islower(s1[i])) ts1+=s1[i]-'a'+1;
            else if(isupper(s1[i])) ts1+=s1[i]-'A'+1;
        }

        if(ts1%9==0) ts1=9;
        else ts1%=9;

        for(int i=0;i<s2.size();i++){
            if(islower(s2[i])) ts2+=s2[i]-'a'+1;
            else if(isupper(s2[i])) ts2+=s2[i]-'A'+1;
        }

        if(ts2%9==0) ts2=9;
        else ts2%=9;

        if(ts1>=ts2)
            rslt=ts2*100.0/ts1;

        else rslt=ts1*100.0/ts2;

            printf("%.2f %c\n",rslt,'%');

    }

    return 0;
}
