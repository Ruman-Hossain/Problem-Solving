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
    int t,radius;
    int  L,W,Wmid,LxT,Lxd,RxT,Rxd/*LyT,RyT,Lyd,Ryd*/;
    cin>>t;
    int kase=1;
    while(t--){
        cin>>radius;

        L=(5*radius);
        W=(L*3)/5;
        Wmid=W/2;
        LxT = - (3*W)/4;
        Lxd=LxT;
        //LyT=Wmid;
        //Lyd= -(Wmid);

        RxT=(11*W)/12;
        Rxd=RxT;
        //RyT=Wmid;
       // Ryd= -(Wmid);

        cout<<"Case "<<kase++<<":"<<endl;
        cout<<LxT<<" "<<Wmid<<endl;
        cout<<RxT<<" "<<Wmid<<endl;
        cout<<Rxd<<" "<<-Wmid<<endl;
        cout<<Lxd<<" "<<-Wmid<<endl;

    }
    return 0;
}
