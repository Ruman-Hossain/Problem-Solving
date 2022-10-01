#include <bits/stdc++.h>
using namespace std;
const int N = 200031;
int n, m, k;
int board[200][200];
int used[200][200];
vector<pair<int, int>  >comp;
vector<pair<int, vector<pair<int, int> > > > lake;
int ans;

bool borderline(int a, int b)
{
	return (a == 1 || a == n || b == 1 || b == m);
}

bool outside(int a, int b)
{
	return (a<1 || a>n || b<1 || b>m);
}

void dfs(int a, int b)
{
	comp.push_back(make_pair(a, b));
	used[a][b] = 1;
	for (int dx = -1; dx <= 1; dx++)
	{
		for (int dy = -1; dy <= 1; dy++)
		{
			if (abs(dx) + abs(dy) != 1)
				continue;
			if (outside(a + dx, b + dy))
				continue;
			if (used[a + dx][b + dy] || board[a + dx][b + dy])
				continue;
			dfs(a + dx, b + dy);
		}
	}
}
int main(){

	ios_base::sync_with_stdio(0);
	//cin.tie(0);

	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++){
		string st;
		cin >> st;for (int j = 1; j <= m; j++)
		{
			if (st[j - 1] == '.')
				board[i][j] = 0;
			else
				board[i][j] = 1;
		}
	}

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (board[i][j] == 1)
				continue;
			if (used[i][j])
				continue;
			comp.clear();
			dfs(i, j);
			int flag = 0;
			for (int q = 0; q < comp.size(); q++){
				if (borderline(comp[q].first, comp[q].second))
					flag = 1;
			}
			if (flag)
				continue;
			lake.push_back(make_pair(comp.size(), comp));
		}
	}

	sort(lake.begin(), lake.end());

	while (lake.size() > k)
	{
		ans += lake[0].first;
		comp = lake[0].second;
		for (int i = 0; i < comp.size(); i++)
		{
			int a = comp[i].first;
			int b = comp[i].second;
			board[a][b] = 1;
		}
		lake.erase(lake.begin());
	}

	cout << ans << endl;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (board[i][j] == 1)
				cout << "*";
			else
				cout << ".";
		}
		cout << endl;
	}
	cin.get(); cin.get();

	return 0;
}