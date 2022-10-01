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
    int t,n,i,a[50];
    cin>>t;
    int kase=1;
    while(t--){
        cin>>n;
        int high,low;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        high=0,low=0;
        if(n==1){
            high=0,low=0;
        }
        else{
        for(i=0;i<n-1;i++){
            if(a[i+1]>a[i])
                high++;
            else if(a[i]>a[i+1])
                low++;
            }
        }
        cout<<"Case "<<kase++<<": "<<high<<" "<<low<<endl;
    }

    return 0;
}
