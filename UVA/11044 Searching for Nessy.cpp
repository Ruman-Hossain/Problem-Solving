#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
	int t, x, y,m,n,rslt;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &x, &y);
		m=x / 3;
		n=y / 3;
		rslt=m*n;
		printf("%d\n", rslt);
	}
	return 0;
}
