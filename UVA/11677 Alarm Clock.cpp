//RUMAN CSE (6th Intake) BRUR
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <strstream>
#include <cctype>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <utility>
#include <set>
#include <list>
#include <vector>
#include <iomanip>


using namespace std;
#define FOR(a,b) for(i=a;i<=b;i++)
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI acos(-1.0)
#define Pi 3.1415926535897932385
#define EPS 1e-9
#define INF 1 << 28
#define all(x) (x).begin(), (x).end()
#define sz(s) (int)s.size()
#define read(x) cin >> x
#define read2(x,y) cin >> x >> y
#define read3(x,y,z) cin >> x >> y >> z
#define out(x) cout << x
#define pb() push_back()
#define ppb pop_back
#define mp(a, b) make_pair(a, b)
#define endl '\n'
#define MAX 100000
#define pf() printf()
#define sf() scanf()
#define ll long long;
#define ull unsigned long long


//#define isValid(a, b) ((a >= 0 && a < b) ? 1 : 0)
//int dr[]  =  {0, -1, -1, -1,  0,  1, 1, 1};
//int dc[]  =  {1,  1,  0, -1, -1, -1, 0, 1};
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int h,h1,h2,m,m1,m2;
    while(cin>>h1>>m1>>h2>>m2){
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;
        else{
            h=h2-h1;
            m=m2-m1;
        }
        if(m<0){
            m=m+60;
            h=h-1;
        }
        if(h<0){
            h=h+24;
        }
        int rslt=h*60+m;
        cout<<rslt<<endl;
    }
    return 0;
}
