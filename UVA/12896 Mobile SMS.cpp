//RUMAN CSE (6th Intake) BRUR
#include<bits/stdc++.h>
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI 3.1416
#define MX 1000010
using namespace std;
char SMS[10][10] = {
                    " ",
                    ".,?\"", "abc", "def",
                    "ghi", "jkl", "mno",
                    "pqrs", "tuv", "wxyz"

                    };
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,n,a[128],b[128];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

        for(int i=0;i<n;i++)
            putchar(SMS[a[i]][b[i] - 1]);
        cout<<endl;
    }
    return 0;
}
