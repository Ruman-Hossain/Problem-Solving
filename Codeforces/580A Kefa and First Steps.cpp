#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    int a[n];
    int mx=-1,cnt=0;
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>=a[i-1]){
            cnt++;
            if(cnt>mx)
                mx=cnt;
        }else{
            cnt=1;
        }
    }
    cout<<mx<<endl;
    return 0;
}
