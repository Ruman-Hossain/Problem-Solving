#include <bits/stdc++.h>
using namespace std;
const unsigned int MOD = 1000000007;
#define ll long long
#define PI 3.1416
string day[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    int k[]={1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2,
     1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
    while(cin>>n){
        cout<<k[n-1]<<endl;
    }
    return 0;
}