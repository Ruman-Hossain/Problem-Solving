#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    long long t,x,y,a,b,n;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        n=(y-x)/(a+b);
        int p=x+a*n;
        int s=y-b*n;
        if(p==s)
            cout<<n<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
