#include <bits/stdc++.h>
//........................</HEADER>................................
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
//........................</CONSTANT DEFINE>........................
const unsigned int MOD = 1000000007;
#define ll long long
#define Imax 1e9+5
#define LLmax 1e18
#define Imin -1e9-5
#define LLmin -1e18
#define PI acos(-1.0)
#define EPS 1e-9
#define INF 1<<28

//........................</LOOP >.................................
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define rloop(i,a,b) for(int i=b;i>=a;i--)

//................</ STANDARTD TEMPLATE LIBRARY>...................
#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x)
#define mp(a,b) make_pair((a),(b))

//........................</ TYPE CONVERSION>......................
#define toRad(a) ((a)*(PI)/180)
#define toDeg(a) ((a)*180/(PI))

//........................</ MATH>.................................
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define sq(a) ((a)*(a))
inline bool isEq(double a,double b){
    return (abs(a-b)<EPS);
}
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}

//........................</ ARRAY DEFAULT>........................
#define mem(a,v) memset(a,v,sizeof(a))
string day [] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
int month[]={31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year

//........................</DIRECTION>.............................
int dx4[]={1,0,-1,0};
int dy4[]={0,1,0,-1}; //4 Direction

int dx8[]={1,1,0,-1,-1,-1,0,1};
int dy8[]={0,1,1,1,0,-1,-1,-1};//8 direction

int dxh[]={2,1,-1,-2,-2,-1,1,2};
int dyh[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction (horse)

//........................</ INPUT/OUTPUT>.........................
#define read(n) scanf("%d",&n)
#define readll(n) scanf("%lld",&n)
#define read2(n,m) scanf("d",&n,&m)
#define read3(n,m,w) scanf("d%d",&n,&m,&w)
#define read2ll(n,m) scanf("lld",&n,&m)
#define write(n) printf("%d\n",n)
#define write2(n,m) printf("%d %d\n",n,m)
#define newline '\n'
#define PRECISION(x) cout << fixed << setprecision(x);
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//.......................</ PRE DEFINED FUNCTIONS>..............................
bool sortByFirst(const pair<int,int>&a,const pair<int,int>&b){
    return a.first>b.first;
}
vector <string> v;
void dfs (string str, string t = "", int cnt = 0) {
    if (cnt == 2) {
        v.push_back (t);
        return;
    } else {
        for (int i = 0; i <str.size (); i ++) {
            dfs (str, t + str [i], cnt + 1);
        }
    }
}
vector<vector<int> >divisor(100005);
void divisors(){
    for(int i=1;i<100005;i++){
        for(int j=i;j<100005;j+=i){
           divisor[j].push_back(i);
        }
    }
}

int main () {
    FAST_IO
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            if(m==1)cout<<"-1"<<endl;
            else{
                cout<<"5";
                for(int i=1;i<m;i++)
                    cout<<"7";
                cout<<endl;
            }
        }
    }
    return 0;
}
