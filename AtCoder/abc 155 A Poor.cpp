#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==b&& a!=c || a==c&&a!=b || b==c&&b!=a)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
	return 0;
}