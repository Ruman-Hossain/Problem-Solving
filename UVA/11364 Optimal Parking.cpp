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
	int tc, n, r, l, pos;

	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);

		r = -100000;
		l =  100000;
		for (int i = 0; i < n; i++) {
			scanf("%d", &pos);
			if (pos > r)
				r = pos;
			if (pos < l)
				l = pos;
		}
		printf("%d\n", 2 * (r - l));
	}
}
