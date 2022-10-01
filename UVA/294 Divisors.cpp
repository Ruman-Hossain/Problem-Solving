#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int a, b; cin >> a >> b;
		int MAX = -1, num;
		for (int i = a; i <= b; ++i){
			int cnt = 0;
			for (int j = 1; j <= sqrt(i); ++j){
				if (i % j == 0){
					++cnt;
					if (i / j != j) ++cnt;
				}
			}
			if (cnt > MAX) MAX = cnt, num = i;
		}
		printf("Between %d and %d, %d has a maximum of %d divisors.\n", a, b, num, MAX);
	}
	return 0;
}
