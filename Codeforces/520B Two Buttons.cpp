#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,m;
    cin>>n>>m;
    int cnt=0;
    if(m<n){
        cout<<n-m<<endl;
        return 0;
    }
    while(n<m){
        if(m%2==0)
            m/=2;
        else
            m++;
        cnt++;
    }
    cout<<abs(cnt + n - m)<<endl;
    return 0;
}
