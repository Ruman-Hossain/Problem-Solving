#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
#define MAXINF 1000000005
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repc(it, x) for(auto it = (x).begin(); it != (x).end(); ++it)
#define rrep(i,n) for(int i = (n)-1; i >= 0; --i)
#define rrepc(it, x) for(auto it = (x).rbegin(); it != (x).rend(); ++it)
#define all(x) (x).begin(), (x).end()
#define P pair<int, int>
 
const int MX = 2005;
bool d[3][3][MX];
 
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<string> s(3);
    rep(i, 3) cin >> s[i];
    int ans = MX*3;
    sort(all(s));
    do {
        rep(i,3)rep(j,3)rep(k,s[i].size()) {
            if(i > j) continue;
            bool isOk = true;
            for(int ni = k; ni < s[i].size(); ni++) {
                int nj = ni-k;
                if(nj >= s[j].size()) break;
                if(s[i][ni]=='?' || s[j][nj]=='?') continue;
                if(s[i][ni]!=s[j][nj]) isOk = false;
            }
            d[i][j][k] = isOk;
        }
        auto f = [&](int i, int j, int k) {
            if(k >= s[i].size()) return true;
            return d[i][j][k];
        };
        rep(x, MX) rep(y, MX) {
            if(!f(0,1,x)) continue;
            if(!f(1,2,y)) continue;
            if(!f(0,2,x+y)) continue;
            int now = 0;
            now = max<int>(now, s[0].size());
            now = max<int>(now, x+s[1].size());
            now = max<int>(now, x+y+s[2].size());
            ans = min(ans, now);
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << ans << endl;
    return 0;
}