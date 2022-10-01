#include<bits/stdc++.h>
using namespace std;
int n;
char s[12];
void dfs(int x, int y) {
    int i;
    if (x == n) {
        printf("%s\n", s);
    } else {
        for (i = 0; i < y; i++) {
            s[x] = 'a' + i;
            //cout<<"("<<x+1<<","<<y<<")"<<endl;
            dfs(x + 1, y);
        }
        s[x] = 'a' + y;
        //cout<<"("<<x+1<<","<<y+1<<")"<<endl;
        dfs(x + 1, y + 1);
    }
}
int main() {
    int i;
    while(cin>>n){
    dfs(0, 0);
    }
    return 0;
}