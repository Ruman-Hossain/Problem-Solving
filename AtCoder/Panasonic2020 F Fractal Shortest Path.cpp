#include <bits/stdc++.h>
using namespace std;
 
#define NDEBUG
#include <cassert>
 
 
typedef long long ll;
typedef long double Double;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef pair<ll,ll> llll;
typedef pair<double,double> dd;
 
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;
typedef vector<vector<ii>> vvii;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<llll> vllll;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<long double> vD;
 
#define sz(a)  int((a).size())
#define pb  push_back
#define eb  emplace_back
#define FOR(var,from,to) for(int var=(from);var<=(to);++var)
#define rep(var,n)  for(int var=0;var<(n);++var)
#define rep1(var,n)  for(int var=1;var<=(n);++var)
#define repC2(vari,varj,n)  for(int vari=0;vari<(n)-1;++vari)for(int varj=vari+1;varj<(n);++varj)
#define repC3(vari,varj,vark,n)  for(int vari=0;vari<(n)-2;++vari)for(int varj=vari+1;varj<(n)-1;++varj)for(int vark=varj+1;vark<(n);++vark)
#define ALL(c)  (c).begin(),(c).end()
#define RALL(c)  (c).rbegin(),(c).rend()
#define tr(i,c)  for(auto i=(c).begin(); i!=(c).end(); ++i)
#define mset(arr,val)  memset(arr,val,sizeof(arr))
#define mid(x,y) ((x)+((y)-(x))/2)
#define IN(x,a,b) ((a)<=(x)&&(x)<=(b))
#define cons make_pair
#define clamp(v,lo,hi) min(max(v,lo),hi)
#define ABS(x) max((x),-(x))
 
template <typename T>
inline bool found(set<T> &s, T elem) { return s.find(elem) != s.end(); }
template <typename T>
inline bool found(unordered_set<T> &s, T elem) { return s.find(elem) != s.end(); }
template <typename T, typename U>
inline bool found(map<T,U> &s, U elem) { return s.find(elem) != s.end(); }
template <typename T, typename U>
inline bool found(unordered_map<T,U> &s, U elem) { return s.find(elem) != s.end(); }
template <typename T>
inline bool found(vector<T> &s, T elem) { return find(s.begin(), s.end(), elem) != s.end(); }
inline int found(string &s, string t) { return (int)s.find(t); }
inline int found(string &s, int c) { return (int)s.find(c); }
 
template<typename T1, typename T2> inline void amin(T1 & a, T2 const & b) { if (a>b) a=b; }
template<typename T1, typename T2> inline void amax(T1 & a, T2 const & b) { if (a<b) a=b; }
template<typename X, typename T> auto vectors(X x, T a) { return vector<T>(x, a); }
template<typename X, typename Y, typename Z, typename... Zs> auto vectors(X x, Y y, Z z, Zs... zs) { auto cont = vectors(y, z, zs...); return vector<decltype(cont)>(x, cont); }
 
inline ll square(ll x) { return x * x; }
inline ll gcd(ll a, ll b) { while(a) swap(a, b%=a); return b; }
template <typename T>
inline T mod(T a, T b) { return ((a % b) + b) % b; }
 
template <typename T>
int find_left(vector<T>& v, T elem) {
    return (int)(upper_bound(v.begin(), v.end(), elem) - v.begin()) - 1;
}
template <typename T>
int find_right(vector<T>& v, T elem) {
    return (int)(lower_bound(v.begin(), v.end(), elem) - v.begin());
}
 
const ll MOD=1000000007LL;
 
ll ADD(ll x, ll y) { return (x+y) % MOD; }
ll SUB(ll x, ll y) { return (x-y+MOD) % MOD; }
ll MUL(ll x, ll y) { return x*y % MOD; }
ll POW(ll x, ll e) { ll v=1; for(; e; x=MUL(x,x), e>>=1) if (e&1) v = MUL(v,x); return v; }
ll DIV(ll x, ll y) { /*assert(y%MOD!=0);*/ return MUL(x, POW(y, MOD-2)); }
 
#define DIM 30
 
vector<ll> to_ter(long long x, int k=DIM)
{
    vector<ll> res(k, 0);
    for(int i=0; i<k; ++i) {
        res[i] = x;
        x /= 3;
        if (x == 0) break;
    }
    return res;
}
 
 
ll a,b,c,d;
vll a3(DIM), b3(DIM), c3(DIM), d3(DIM);
vll pow3(DIM+1);
 
 
 
ll sub(int dim){
    ll x0 = a3[dim], y0 = b3[dim], x1 = c3[dim], y1 = d3[dim];
 
    ll xmov = ABS(a-c), ymov = ABS(b-d);
 
    if (x0 == x1 && y0 == y1) {
        assert(dim != 0);
        return sub(dim-1);
    }
    else if (x0 == x1) {
        if (x0%3 == 1) {
            ll diff = ABS(y0 - y1);
            if (diff <= 1) {
                if (dim == 0) return xmov + ymov;
                else return sub(dim-1);
            } else {
                ll lo = x0*pow3[dim]-1, hi = (x0+1)*pow3[dim];
                xmov = min( ABS(a-lo)+ABS(c-lo), ABS(hi-a)+ABS(hi-c) );
                return xmov + ymov;
            }
        } else {
            if (dim == 0) return xmov + ymov;
            else return sub(dim-1);
        }
    }
    else if (y0 == y1) {
        if (y0%3 == 1) {
            ll diff = ABS(x0 - x1);
            if (diff <= 1) {
                if (dim == 0) return xmov + ymov;
                else return sub(dim-1);
            } else {
                ll lo = y0*pow3[dim]-1, hi = (y0+1)*pow3[dim];
                ymov = min( ABS(b-lo)+ABS(d-lo), ABS(hi-b)+ABS(hi-d) );
                return xmov + ymov;
            }
        } else {
            if (dim == 0) return xmov + ymov;
            else return sub(dim-1);
        }
    }
    else {
        return xmov + ymov;
    }
}
 
ll solve(){
    pow3[0] = 1; rep(i,DIM) pow3[i+1] = pow3[i]*3;
 
    a3 = to_ter(a);
    b3 = to_ter(b);
    c3 = to_ter(c);
    d3 = to_ter(d);
 
 
    return sub(DIM-1);
}
 
int main() {
    int Q; scanf("%d%*c", &Q);
    rep(i,Q){
        scanf("%lld %lld %lld %lld%*c", &a, &b, &c, &d);
        --a; --b; --c; --d;
        printf("%lld\n", solve());
    }
    return 0;
}