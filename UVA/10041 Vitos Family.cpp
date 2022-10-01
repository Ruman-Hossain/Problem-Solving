#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,r,s[30005],m,srch;
    cin>>t;
    while(t--){
        cin>>r;
        for(int i=0;i<r;i++){
            cin>>s[i];
        }

        //if(r==1)cout<<"0"<<endl;
        //else{
        int dis=0;
        sort(s,s+r);
        m=r>>1  ;//dividing by 2 or shifting to find median
        srch=s[m];
        for(int i=0;i<m;i++){
            dis+=srch - s[i];
        }
        for(int i=m+1;i<r;i++){
            dis+=s[i]-srch;
        }
        cout<<dis<<endl;
       // }

    }
    return 0;
}
