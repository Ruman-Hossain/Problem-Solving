#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string,int>m;
    int n;
    cin>>n;
    while(n--){
        int q,mark;
        string name;
        cin>>q;
        if(q==1){
            cin>>name>>mark;
             if(m.find(name) == m.end()){
                 m.insert({name,mark});
             }else{
                 m[name]+= mark;
             }
        }else if(q==2){
            cin>>name;
            m.erase(name);
        }else if(q==3){
            cin>>name;
            if(m.find(name) == m.end())
                 cout<<"0"<<endl;
             else
                 cout<<m[name]<<endl;
        }
    }
    return 0;
}


