#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin>>n){
        map<string,int>m;
        string str;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>str;
            m[str]++;
            if(m[str]>cnt)cnt=m[str];
        }
        map<string,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
            if(it->second==cnt)cout<<it->first<<endl;
        }
    }
	return 0;
}