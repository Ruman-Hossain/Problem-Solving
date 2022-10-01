#include<bits/stdc++.h>
const int maxn = 1e3 + 5;

int par[maxn];

void init()
{
    for (int i = 0; i < maxn; i++)
    {
        par[i] = i;
    }
}

int findRep(int r)
{
    if (r == par[r])
    {
        return r;
    }
    return par[r] = findRep(par[r]);
}

int totalCity, totalRoad;
vector<pair<int, int>> twoWheeler;
vector<pair<int, int>> fourWheeler;
vector<pair<int, int>> bothWheeler;

int unit(vector<pair<int, int>> &roads)
{
    int road=0;
    for (auto it : roads)
    {
        int u = it.first;
        int v = it.second;
        int p = findRep(u);
        int q = findRep(v);
        if (p != q)
        {
            road++;
            par[q]  = p;
        }
    }
    return road;
}

int kruskal()
{
    init();
    int road = 0;
    // select all both wheeler road first
    int both = unit(bothWheeler);
// select from two wheeler road
    int two = unit(twoWheeler);

    road += both;
    road += two;
    
    if (both + two != totalCity - 1) return -1;

    init();
// select all both wheeler road first
    both = unit(bothWheeler);
// select from four wheeler road
    int four = unit(fourWheeler);
    
      if (both + four != totalCity - 1) return -1;
    
    road += four;

    return road;
}
int twoFourWheelRoads(vector<vector<int> > &arr, int n, int m){
	// Write your code here.
    totalCity=n, totalRoad=m;
        twoWheeler.clear();
        fourWheeler.clear();
        bothWheeler.clear();

        for (int i = 0; i < totalRoad; i++)
        {
            int u=arr[i][0], v=arr[i][1], type=arr[i][2];
            if (type == 1)
            {
                twoWheeler.push_back({u, v});
            }
            else if (type == 2)
            {
                fourWheeler.push_back({u, v});
            }
            else
            {
                bothWheeler.push_back({u, v});
            }
        }
        int selectedRoads = kruskal();
        if (selectedRoads == -1) return -1;
        return totalRoad - selectedRoads;
}