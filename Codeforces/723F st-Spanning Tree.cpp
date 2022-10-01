#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);
const double E = exp(1);

const int N = 2e5 + 5;
int n, m;
vector <int> g[N];
vector < vector <int> > cps;
int s, t, ds, dt;
bool vis[N];
vector <int> v;
vector <ii> res;
int liga[2][N];

void go (int at) {
	vis[at] = 1;
	v.push_back(at);

	for (int i = 0; i < (int)g[at].size(); i++) {
		int next = g[at][i];
		if (!vis[next] and next != s and next != t) {
			res.push_back(make_pair(at, next));
			go(next);
		}
	}
}

int main (void) {
	ios_base::sync_with_stdio(false);

	cin >> n >> m;

	bool direto = 0;

	while (m--) {
		int a, b;	cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	cin >> s >> t >> ds >> dt;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < (int)g[i].size(); j++) {
			int a = i, b = g[i][j];
			if (a == s and b == t)
				direto = 1;
			if (a == t and b == s)
				direto = 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		if (!vis[i] and i != s and i != t) {
			v.clear();
			go(i);
			cps.push_back(v);
		}
	}

	for (int i = 0; i < (int)cps.size(); i++) {
		for (int j = 0; j < (int)cps[i].size(); j++) {
			int u = cps[i][j];
			for (int k = 0; k < (int)g[u].size(); k++) {
				int next = g[u][k];
				if (next == s) {
//					cout << i << " " << u << " " << s << endl;
					liga[0][i] = u;
				} if (next == t) {
//					cout << i << " " << u << " " << t << endl;
					liga[1][i] = u;
				}
			}
		}
	}

	int cts = 0, ctt = 0;
	for (int i = 0; i < n; i++) {
		if (liga[0][i] and !liga[1][i]) {
//			cout << s << " " << liga[0][i] << endl;
			res.push_back(make_pair(s,liga[0][i]));
			cts++;
		} else if (!liga[0][i] and liga[1][i]) {
//			cout << t << " " << i << " " << liga[1][i] << endl;
			res.push_back(make_pair(t,liga[1][i]));
			ctt++;
		}
	}

	bool f = 1;

	if (cts > ds) f = 0;
	if (ctt > dt) f = 0;

	bool ff = 1;

	for (int i = 0; i < n; i++) {
		 if (liga[0][i] and liga[1][i]) {
		 	if (ff) {
				if (cts < ds and ctt < dt) {
					cts++;	ctt++;
					res.push_back(make_pair(s,liga[0][i]));
					res.push_back(make_pair(t,liga[1][i]));
				} else {
					f = 0;
				}
				ff = 0;
			} else {
				if (cts < ds) {
					cts++;
					res.push_back(make_pair(s,liga[0][i]));
				} else if (ctt < dt) {
					ctt++;
					res.push_back(make_pair(t,liga[1][i]));
				} else {
					f = 0;
				}
			}
		 }
	}

	if (ff) {
		if (direto) {
			if (cts < ds and ctt < dt) {
				res.push_back(make_pair(s,t));
			} else {
				f = 0;
			}
		} else {
			f = 0;
		}
	}

	if (!f) {
		cout << "No" << endl;
		return 0;
	}

	cout << "Yes" << endl;

	for (int i = 0; i < (int)res.size(); i++) {
	    
		cout << res[i].first << " " << res[i].second << endl;
		
	}

	return 0;
}