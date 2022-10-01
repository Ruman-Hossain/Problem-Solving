#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        int tm=240;
        int t=tm-m;
        int cnt=0;
        int i=1;
        while(t>=0&&cnt<=n){
            t-=5*i;
            cnt++;
            i++;
        }
        cout<<cnt-1<<endl;
    }
    return 0;
}
