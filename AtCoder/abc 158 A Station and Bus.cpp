#include <bits/stdc++.h>
using namespace std;
const unsigned int MOD = 1000000007;
#define ll long long
#define PI 3.1416
string day[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string str;
    while(cin>>str){
        if(str[0]==str[1]&&str[1]==str[2])cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}