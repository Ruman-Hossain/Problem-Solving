#include <bits/stdc++.h>
using namespace std;
const unsigned int MOD = 1000000007;
#define ll long long
#define PI 3.1416
string day[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    unsigned long long r,c;
    while(cin>>r>>c){
        if(r==1||c==1)cout<<"1\n";
        else if((r*c)%2==0)cout<<(r*c)/2<<endl;
        else
            cout<<((r*c)+1)/2<<endl;
    }
 
    return 0;
}