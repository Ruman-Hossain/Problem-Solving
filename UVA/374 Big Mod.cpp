//RUMAN CSE (6th Intake) BRUR
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<sstream>
#include<fstream>
#include<cassert>
#include<climits>
#include<cstdlib>
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
using namespace std;
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI acos(-1.0)
#define EPS 1e-9
#define INF 1 << 28
#define all(x) (x).begin(), (x).end()
#define pb() push_back()
#define ppb pop_back
#define mp(a, b) make_pair(a, b)
#define endl '\n'
#define MAX 100000
#define pf printf
#define sf scanf
#define ll long long ;


typedef pair<int, int> pii;

//#define isValid(a, b) ((a >= 0 && a < b) ? 1 : 0)
//int dr[]  =  {0, -1, -1, -1,  0,  1, 1, 1};
//int dc[]  =  {1,  1,  0, -1, -1, -1, 0, 1};
long BigMod(long b,long p,long m){
    if(p==0)return 1;
    if(p%2==0)
        return (BigMod(b,p/2,m)*(BigMod(b,p/2,m))%m);
    return (BigMod(b,p-1,m)*(b%m))%m;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long b,p,m;
    while(cin>>b>>p>>m){
        long n=BigMod(b,p,m);
        cout<<n<<endl;
    }

    return 0;
}
