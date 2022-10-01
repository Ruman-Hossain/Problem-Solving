
/*==========================================================*\
UserID      :    Ruman_Hossain
Name        :    Md. Ruman Hossain
Department  :    CSE
Institute   :    Begum Rokeya University Rangpur
Address     :    Rangpur, Bangladesh
Mail        :    ruman.cse.brur@gmail.com
Facebook    :    https://www.facebook.com/ruman.hossain.988
Website     :    https://www.daydreamerszone.com
\*==========================================================*/
#include<bits/stdc++.h>
using namespace std;
#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define MIN3(a,b,c) min(a,min(b,c))
#define MAX3(a,b,c) max(a,max(b,c))
#define MX 100000
#define MOD 1000000007
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int>VI;
typedef pair<int,int>II;
typedef pair<LL,int>LI;
typedef pair<int,LL>IL;
typedef vector<II>VII;
typedef vector<IL>VIL;
typedef vector<LI>VLI;
char grid[110][110];
map < II, int > visit;
int adx8[] = {1,1,1,0,-1,-1,-1,0};
int ady8[] = {-1,0,1,1,1,0,-1,-1};
int adx4[] = {0, 0, 1, -1};
int ady4[] = {1, -1, 0, 0};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    //READ("input.txt");
    //WRITE("output.txt");
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n],flag=0,s=0,d,cnt=0;
        FOR(i,n)cin>>a[i];
        FOR(i,n)cin>>b[i];
        for(int i=0;i<n;i++){
            if( (b[i]-a[i]) <0){
                flag=1;
                break;
            }else{
                if( (b[i]-a[i]) > 0 && s==0){
                    d=b[i]-a[i];
                    s=1;
                }else if(s==1){
                    if((b[i]-a[i]) ==0){
                        cnt=1;
                    }
                    else if((b[i]-a[i])==d && cnt){
                        flag=1;
                        break;
                    }
                    else if( (b[i]-a[i])!=d ){
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
