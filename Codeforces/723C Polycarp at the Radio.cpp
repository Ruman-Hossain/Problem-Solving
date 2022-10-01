#include<bits/stdc++.h>

using namespace std;

inline int read()
{
	int s = 0;
	char c;
	while((c=getchar())<'0'||c>'9');
	do{
            s=s*10+c-'0';
            
    }while((c=getchar())>='0'&&c<='9');

	return s;
}
    typedef pair<int,int> pii;
    
    const int N = 2010;
    int n,m,a[N],b[N],kl[N],trgt,cnt[N],tc[N],rslt;
    pii li[N];
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	int i,j;
	n = read(), m = read();
	for(i=1;i<=n;i++)
	{
		a[i] = b[i] = read();
		if(a[i]<=m) cnt[a[i]]++;
	}
	//................................
	trgt = n/m;
	for(i=1;i<=m;i++)
        tc[i] = trgt;
	for(i=1;i<=n;i++)
	{
		if(a[i]>m)
		{
			for(j=1;j<=m;j++)
                if(cnt[j]<tc[j]){
                     rslt++;
                      b[i] = j;
                      cnt[j]++;
                      break;
                      }
		}
		else if(cnt[a[i]]>tc[a[i]]){
            kl[i] = 1;
            cnt[a[i]]--;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(kl[i])
            for(j=1;j<=m;j++)
                if(cnt[j]<tc[j]){
                     rslt++;
                     b[i] = j;
                    cnt[j]++;
                    break;
                }
	}
	cout<<trgt<<" "<<rslt<<endl;
	for(i=1;i<=n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
	return 0;
}