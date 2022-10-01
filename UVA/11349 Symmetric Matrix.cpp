#include<bits/stdc++.h>
using namespace std;
bool is_symmetric(long data[105][105],int n){
    for(long i=0;i<n;i++){
        for(long j=0;j<n;j++){
            if (data[i][j] != data[n-i-1][n-j-1]){
            return false;
            }
        }
    }
    return true;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long t,data[105][105];
    cin>>t;
    long kase=1;
    while(t--){
        char a,b;
        cin>>a>>b;
        int n;
        cin>>n;
        int ok=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>data[i][j];
                if(data[i][j] < 0)
                    ok=false ;
            }
        }
        if(ok && is_symmetric(data,n))
            cout<<"Test #"<<kase++<<": Symmetric."<<endl;
        else
            cout<<"Test #"<<kase++<<": Non-symmetric."<<endl;
    }
    return 0;
}
