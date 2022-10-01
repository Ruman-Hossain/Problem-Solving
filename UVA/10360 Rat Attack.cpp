#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int d, n, x, y, p;
	int i,j,k;
	int *killed[1024];
	cin>>t;

	while (t--) {
		cin>>d>>n;
		for(i=0;i<1024;i++) {
			killed[i]=new int[1024];
			for(j=0;j<1024;j++) {
				killed[i][j]=0;
			}
		}

		for (i=0;i<n;i++) {
			cin>>x>>y>>p;
			for(j=x-d;j<=x+d;j++) {
				if(j<0 || j>=1024)
					continue;

				for(k=y-d;k<=y+d;k++) {
					if(k<0 || k>=1024)
						continue;

					killed[j][k] += p;
				}
			}
		}

		int mx= -1;
		for (i=0;i<1024;i++) {
			for (j=0;j<1024;j++) {
				if(killed[i][j]>mx) {
					x = i;
					y = j;
					mx=killed[i][j];
				}
			}
		}

		cout<<x<<" "<<y<<" "<<mx<<endl;
	}

	return 0;
}
