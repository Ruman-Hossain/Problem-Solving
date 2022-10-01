
#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstdlib>
#include<cstring>
#include<cmath>

//RUMAN CSE 6TH INTAKE
using namespace std;

#define PI acos(-1.0)
#define EPS 1e-9
#define INF 1<<28
#define sq(a) ((a)*(a))
#define toRad(a) ((a)*(PI)/180)
#define toDeg(a) ((a)*180/(PI))
#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x)
#define mp(a,b) make_pair((a),(b))

// .........scanf prnitf newline and loop define
#define sf(x) scanf("%d", &x)
#define sff(x,y) scanf("%d %d", &x,&y)
#define sfff(x,y,z) scanf("%d %d %d", &x,&y,&z)
#define PR_CASE(x) printf("Case %d: ", x)
#define NL putchar('\n')
#define loop(i,x,y) for(int i=x;i<=y;i++)

//.............max min function and max mood
#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y
#define MAX_VAL 10005
#define MOD 1000000007

int SET(int n,int i) {return (n|(1<<i));}
int RESET(int n,int i) {return (n&~(1<<i));}
bool cheaq(int n,int i) {return (n&(1<<i));}


#define  what_is(x) cerr<<#x<<"is"<<x<<endl;
#define mset(array,value) memset(array,value,sizeof(array))

inline bool isEq(double a,double b){
    return (abs(a-b)<EPS);
}

typedef long long ll;
typedef unsigned long long ui;
typedef pair<int,int>pii;

//#define isValid(a,b) ((a>=0 && a<b)?1:0)
int dr[]={0,-1,-1,-1,0,1,1,1};
int dc[]={1,1,0,-1,-1,-1,0,1};
class base_class{
    vector<int> vt[MAX_VAL];
    int par[MAX_VAL];
public:
    void initializ(){

    }
    void input_fun();

};

void base_class::input_fun()
{

}

//int com(int x,int y)return x<y;
const int N = 100005;
int n;
long long a[N], b[N];
int ar[N], br[N];
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b, n, d,c,v;
    int data[20];

    cin>>b>>n;

    while (b)
    {
        // sets up how much they have in credit or whatever
        for (int i = 0; i < b; ++i)
            cin>>data[i];


        while (n--)
        {
            cin>>d>>c>>v;

            data[d - 1] -= v;
            data[c - 1] += v;
        }

        bool positive(true);

        for (int i = 0; i < b; ++i)
            if (data[i] < 0)
                positive = false;

        if (positive)
            printf("S\n");
        else
            printf("N\n");

        cin>>b>>n;
    }

}
