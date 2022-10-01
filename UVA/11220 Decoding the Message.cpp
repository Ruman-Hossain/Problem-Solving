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


#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI acos(-1.0)
#define Pi 3.1415926535897932385
#define EPS 1e-9
#define INF 1 << 28
#define all(x) (x).begin(), (x).end()
#define FOR(a,b) for(i=a;i<b;i++)
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
#define MOD 1000000007
#define pf() printf()
#define sf() scanf()
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define ll long long;
#define ull unsigned long long


//#define isValid(a, b) ((a >= 0 && a < b) ? 1 : 0)
//int dr[]  =  {0, -1, -1, -1,  0,  1, 1, 1};
//int dc[]  =  {1,  1,  0, -1, -1, -1, 0, 1};
int main()
{
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
     int test;
     char input[20000];
     cin>>test;
     getchar();
     getchar();
     for(int k=1;k<=test;k++)
     {

           cout<<"Case #"<<k<<":"<<endl;
          while(gets(input)) {
              if(input[0]=='\0')
                break;
              char *ptr;
              ptr=strtok(input," ");
              int i=1;
              while(ptr!=NULL){
                  string s=ptr;

                  if(s.length()>=i){
                      cout<<s[i-1];
                      i++;
                  }

                  ptr=strtok(NULL," ");

              }

             cout<<endl;
          }

        if(k!=test) cout<<endl;
     }

    return 0;
}
