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
    int t,n,i;
    int BB,AB,DR,WW,kase;
    char ch;
    cin>>t;
    kase=1;
    while(t--){
    BB=AB=WW=DR=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>ch;


            switch(ch){
        case 'A':
            AB++;
            break;
        case 'B':
            BB++;
            break;
        case 'W':
            WW++;
            break;
        default:
            DR++;
            break;


            }
        }
        cout<<"Case "<<kase<<": ";
        kase+=1;
        if(AB==n)
            cout<<"ABANDONED";
        else if(BB+AB==n)
            cout<<"BANGLAWASH";
        else if(WW+AB==n)
            cout<<"WHITEWASH";
        else if(WW==BB)
            cout<<"DRAW "<<BB<<" "<<DR;
        else{

        if(BB>WW)
            cout<<"BANGLADESH "<<BB<<" - "<<WW;
        else
            cout<<"WWW "<<WW<<" - "<<BB;
        }
        cout<<endl;


    }

    return 0;
}
