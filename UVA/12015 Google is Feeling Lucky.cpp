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
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int kase,t,mx,r;
    vector<string>rslt;
    string str;
    cin>>t;
    kase =1;
    while(t--){
            int best = -1;
            rslt.clear();
    for(int i=0;i<10;i++){

        cin>>str>>r;
        if(r>best){
            best = r;
            rslt.clear();
            rslt.push_back(str);
        }
        else if(r == best)
            rslt.push_back(str);
        }
        cout<<"Case #"<<kase++<<":"<<endl;

        int siz = rslt.size();
        for(int i=0;i<siz;i++)
            cout<<rslt[i]<<endl;
    }
    return 0;
}
