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
    char st[100000],st2[100000];
    while(gets(st)){
    if(strcmp(st,"DONE")!=0){

    int ln=strlen(st);
    int i,j;
    for(i=0;i<ln;i++){
        st[i]=tolower(st[i]);
    }
    for(i=0,j=0;i<ln;i++){
        if(st[i]!=' '&&st[i]!=','&&st[i]!='.'&&st[i]!='!'&&st[i]!='?'){
            st2[j]=st[i];
            j++;
        }
    }
    st2[j]='\0';

    int lnth=strlen(st2);
//**** Palildrome check............****
   /* for(i=0;i<lnth;i++)cout<<st2[i];
    cout<<endl;
    for(i=lnth-1;i>=0;i--)cout<<st2[i];
    cout<<endl;
    */
    int flag=0;
    for(i=0,j=lnth-1;i<lnth,j>=0;i++,j--){
            if(st2[i]!=st2[j]){
                    flag=1;
                    break;
            }
            else
                flag=0;

        }
         if(flag==1)  cout<<"Uh oh.."<<endl;
        else if(flag==0) cout<<"You won't be eaten!"<<endl;
    }
    else{
        break;
    }
    }
    return 0;
}

