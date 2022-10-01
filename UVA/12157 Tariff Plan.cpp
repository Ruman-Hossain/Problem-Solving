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
    int t,n,a,mile,juice;
    cin>>t;
    int kase=1;
    while(t--){

        cin>>n;
        mile=juice=0;
        for(int i=0;i<n;i++){
            cin>>a;
            mile+=(a/30)*10+10;
            juice+=(a/60)*15+15;

        }
        if(mile<juice)
            cout<<"Case "<<kase++<<": Mile "<<mile<<endl;
        else if(juice<mile)
            cout<<"Case "<<kase++<<": Juice "<<juice<<endl;
        else
            cout<<"Case "<<kase++<<": Mile Juice "<<mile<<endl;
    }


    return 0;
}
