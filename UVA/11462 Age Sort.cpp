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
    long long int n,a[2000000],i; // array size kom dile run hoy but accepted hoyna.
    while((cin>>n)&&n!=0){        // array size besi dile accepted but codeblock a run hoyna

        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(i=0;i<n-1;i++)
            cout<<a[i]<<" ";
            cout<<a[i]<<endl;
    }


    return 0;
}
