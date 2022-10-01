#include <bits/stdc++.h>
using namespace std;
const unsigned int MOD = 1000000007;
#define ll long long
#define PI 3.1416
#define Imax 1e9+5
#define LLmax 1e18
#define Imin -1e9-5
#define LLmin -1e18
string day [] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
vector <string> v;
bool sortByFirst(const pair<int,int>&a,const pair<int,int>&b){
    return a.first>b.first;
}
void dfs (string str, string t = "", int cnt = 0) {
    if (cnt == 2) {
        v.push_back (t);
        return;
    } else {
        for (int i = 0; i <str.size (); i ++) {
            dfs (str, t + str [i], cnt + 1);
        }
    }
}
int main () {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string str;
    while(cin>>str){
        stack<char>s;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
                s.push(str[i]);
            }else if(str[i]==')'){
                if(s.empty()){
                    s.push(str[i]);
                }else{
                    if(s.top()=='('){
                        s.pop();
                    }
                }
            }
        }
        cout<<(s.empty()?"correct":"incorrect")<<endl;
    }
    return 0;
}
